# 📦 MaNGOS Universal Skeleton Module

A professional, standardized template for creating modular features across the MaNGOS server ecosystem.

## 🌟 Overview
This skeleton provides a "plug-and-play" architecture for adding custom C++ logic to MaNGOS servers. It is designed to be compatible with:
- **MaNGOS Zero** (Vanilla)
- **MaNGOS Two** (TBC)
- **MaNGOS Three / Cata** (WotLK/Cata)
- **MaNGOS Four** (MoP)

Instead of hacking the core files (which makes updating your server a nightmare), this skeleton encourages a **Modular Approach**.

## 📁 Directory Structure
```text
my-skeleton-module/
├── CMakeLists.txt          # Root build file (Supports Git Submodules)
├── README.md               # This file
├── BUILD_GUIDE.md          # Step-by-step beginner's guide
├── MyFeature/              # The actual module logic
│   ├── CMakeLists.txt      # Module-specific build instructions
│   ├── MyFeature.h         # Class definition
│   └── MyFeature.cpp       # Feature implementation
├── conf/
│   └── my_feature.conf.dist # Configuration template
└── sql/
    └── my_feature.sql      # Database schema/data
```

## 🚀 Quick Start
1. **Clone/Copy** this skeleton into your server's `src/modules/` directory.
2. **Register** the module in `src/modules/CMakeLists.txt` using `add_subdirectory()`.
3. **Configure** your `mangosd.conf` and run the provided `.sql` scripts.
4. **Compile** and enjoy your new feature!

## 🛠 Technical Specifications
- **Build System**: CMake 3.x+
- **Language**: C++17 / C++20 (Depending on Core version)
- **Pattern**: Singleton Script Registration (`ScriptMgr`)
- **License**: GNU AGPL v3

## 🤝 Contribution
Feel free to use this skeleton for your own projects. If you find a way to make it even more universal across the MaNGOS family, please submit a PR!
