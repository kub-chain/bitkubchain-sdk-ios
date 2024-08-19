# Bitkub Chain SDK
Software Developer Kit that allow you to access various features provided Bitkub Chain.

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
        from: "0.1.1"
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
source 'https://github.com/bitkub-chain/bitkubchain-spece.git'
```

Then within your application target add the pod as follows
```ruby
target 'MyApp' do 
  pod 'BitkubChainSDK', '~> 0.1.1'
end
```

Alternatively, you can let CocoaPods resolve this package directly with git:
```ruby
target 'MyApp' do
  pod 'BitkubChainSDK', :git => https://github.com/bitkub-chain/bitkubchain-sdk-ios.git, :branch => 'main'
end
```
**Notes**: Check CocoaPods [documentation](https://guides.cocoapods.org/using/the-podfile.html) for more details.