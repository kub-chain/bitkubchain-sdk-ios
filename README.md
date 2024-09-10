# Bitkub Chain SDK

Software Developer Kit that allow you to access various features provided by Bitkub Chain.

## Installation

### Swift Package Manager

To use this package with XCode, use the following url to search for the package:

```
https://github.com/bitkub-chain/bitkubchain-sdk-ios.git
```

To use this package with Swift package, edit `Package.swift` and add the following dependency

```swift
dependencies: [
    .package(
        url: "https://github.com/bitkub-chain/bitkubchain-sdk-ios.git",
        from: "0.1.5"
    )
]
```

Now for any targets that depend on this package, add dependency as follow:

```swift
.target(
    name: "MyTarget",
    dependenciecs: [
        .product(name: "BitkubChainSDK", package: "BitkubChainSDK")
    ]
)
```

### CocoaPods

Add the following source to your `Podfile`

```ruby
source 'https://github.com/bitkub-chain/bitkubchain-specs.git'
```

Then within your application target add the pod as follows

```ruby
target 'MyApp' do
  pod 'BitkubChainSDK', '~> 0.1.5'
end
```

Alternatively, you can let CocoaPods resolve this package directly with git:

```ruby
target 'MyApp' do
  pod 'BitkubChainSDK', :git => 'https://github.com/bitkub-chain/bitkubchain-sdk-ios.git', :branch => 'main'
end
```

**Notes**: Check CocoaPods [documentation](https://guides.cocoapods.org/using/the-podfile.html) for more details.

## Acknowledgements

This project includes software developed by the following contributors:

### JsonCpp

- Developed by _Baptiste Lepilleur_, licensed under the **MIT License**.

- [Full License Text](BitkubChainSDKKit.xcframework/third_party/jsoncpp/LICENSE)

### OpenSSL

- Developed by the _OpenSSL Project_ and _Eric Young_, licensed under the **OpenSSL License** and the **original SSLeay License**.

- This product includes software developed by the OpenSSL Project for use in the OpenSSL Toolkit. (http://www.openssl.org/)

- This product includes cryptographic software written by Eric Young (eay@cryptsoft.com)

- [Full License Text](BitkubChainSDKKit.xcframework/third_party/openssl/LICENSE)

### SHA3IUF

- Developed by _Andrey Jivsov_, licensed under the **MIT License**.

- [Full License Text](BitkubChainSDKKit.xcframework/third_party/sha3iuf/LICENSE)
