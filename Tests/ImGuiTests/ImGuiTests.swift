import XCTest
@testable import ImGui

final class ImGuiTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        let version = igGetVersion()!
        
        XCTAssertEqual(String(cString: version), "1.76 WIP")
    }

    static var allTests = [
        ("testExample", testExample)
    ]
}
