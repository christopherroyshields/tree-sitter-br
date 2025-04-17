import XCTest
import SwiftTreeSitter
import TreeSitterBr

final class TreeSitterBrTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_br())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Br Parser grammar")
    }
}
