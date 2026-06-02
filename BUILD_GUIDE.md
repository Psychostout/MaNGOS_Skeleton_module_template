# 🚀 How to Build Your First MaNGOS Module

Welcome! This guide will take you from a blank folder to a working feature in your server.

## 🛠 Step-by-Step Implementation

### 1. Setup the Folder
*   Go to your server source: `src/modules/`
*   Create a new folder for your feature: `mkdir src/modules/MyCoolFeature`
*   Copy the `MyFeature` folder from the skeleton into this directory.

### 2. Tell the Server to Build It
You need to tell CMake that your new folder exists.
*   Open `src/modules/CMakeLists.txt`
*   Add these lines at the bottom:
    ```cmake
    if(MY_COOL_FEATURE_ENABLE)
        add_subdirectory(MyCoolFeature)
    endif()
    ```

### 3. Add the "On/Off" Switch (Optional but Recommended)
To avoid having to edit CMake every time you want to disable the module:
*   Open the root `CMakeLists.txt` (in the server root)
*   Add this line where other `option()` calls are:
    ```cmake
    option(MY_COOL_FEATURE_ENABLE "Enable my cool custom feature" ON)
    ```

### 4. Database & Config
*   **Database**: Open `sql/my_feature.sql` and run the queries against your `world` database.
*   **Config**: Copy the contents of `conf/my_feature.conf.dist` and paste them into your `mangosd.conf` file.

### 5. Compile
Run your build commands:
```bash
mkdir build && cd build
cmake .. -DMY_COOL_FEATURE_ENABLE=ON
make -j$(nproc)
```

---

## 💡 Easy Module Ideas for Beginners

If you aren't sure what to build first, try these "Training Wheels" projects:

1.  **Welcome Message**: Send a private message to a player the moment they log in.
2.  **Custom Chat Command**: Create a command (like `!discord`) that sends a link to your community.
3.  **Zone Greeting**: Play a sound or send a message when a player enters a specific city (e.g., "Welcome to Stormwind!").
4.  **Anti-Spam**: A simple script that warns players if they send the same message 3 times in a row.
5.  **Auto-Buff Bot**: A script that automatically casts a specific buff on the player every 5 minutes.

---

## 🧪 Fool-Proof Testing Examples

To verify your module is working, use these three tests:

### Test 1: The Console Log (The "Is it alive?" Test)
Check your server console during startup. You should see:
`MyFeature: Module loaded and registered.`
*   **If you don't see this**: Your `CMakeLists.txt` is wrong or the module isn't being compiled.

### Test 2: The In-Game Trigger (The "Logic" Test)
Log into your server and type `hello` in the public chat.
*   **Expected Result**: The server should reply: `"Hello from MyFeature skeleton module!"`
*   **If it doesn't work**: Your logic is correct, but the "hook" (the place in the core that calls your function) isn't connected.

### Test 3: The Database Check (The "Persistence" Test)
Run this SQL query: `SELECT * FROM my_feature_settings;`
*   **Expected Result**: You should see a row with `enabled | 1`.
*   **If it's empty**: You forgot to run the `.sql` file.
