Pod::Spec.new do |s|
s.name         = "DNKSmartHomeSDK"
s.version      = "0.1.3"
s.summary      = "DNKSmartHomeSDK"
s.description  = <<-DESC
DNKSmartHomeSDK智能家居
DESC
s.homepage     = "https://github.com/dnakeyun/DNKSmartHomeSDK"
s.license      = { :type => "MIT", :file => "LICENSE" }
s.author             = { "cqcool" => "cqcool@icloud" }
s.platform     = :ios, "8.0"
s.source       = { :git => "https://github.com/dnakeyun/DNKSmartHomeSDK.git", :tag => s.version }
s.requires_arc = true
s.vendored_frameworks = "DNKSmartHomeSDK/DNKSmartHomeSDK.framework"
s.pod_target_xcconfig = {
        'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
    }
s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end