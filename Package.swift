// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "BitkubChainSDK",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "BitkubChainSDK",
            targets: ["Framework"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "Framework",
            path: "BitkubChainSDKKit.xcframework"
        )
    ]
)
