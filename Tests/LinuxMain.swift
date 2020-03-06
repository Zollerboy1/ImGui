import XCTest

import ImGuiTests

var tests = [XCTestCaseEntry]()
tests += ImGuiTests.allTests()
XCTMain(tests)
