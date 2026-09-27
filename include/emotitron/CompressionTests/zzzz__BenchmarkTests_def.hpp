#pragma once
// IWYU pragma private; include "emotitron/CompressionTests/BenchmarkTests.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BenchmarkTests)
// Forward declare root types
namespace emotitron::CompressionTests {
class BenchmarkTests;
}
// Write type traits
MARK_REF_T(::emotitron::CompressionTests::BenchmarkTests*);
DEFINE_IL2CPP_CLASS(::emotitron::CompressionTests::BenchmarkTests*, "emotitron.CompressionTests", "BenchmarkTests");
// Dependencies UnityEngine.MonoBehaviour
namespace emotitron::CompressionTests {
// Is value type: false
// CS Name: emotitron.CompressionTests.BenchmarkTests
class CORDL_TYPE BenchmarkTests : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field buffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_buffer, put=setStaticF_buffer)) ::ArrayW<uint8_t>  buffer;

/// @brief Field ibuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ibuffer, put=setStaticF_ibuffer)) ::ArrayW<uint32_t>  ibuffer;

/// @brief Field ubuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ubuffer, put=setStaticF_ubuffer)) ::ArrayW<uint64_t>  ubuffer;

/// @brief Field ubuffer2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ubuffer2, put=setStaticF_ubuffer2)) ::ArrayW<uint64_t>  ubuffer2;

/// @brief Method ArrayCopy, addr 0x5ddbb64, size 0x17c, virtual false, abstract: false, final false
static inline void ArrayCopy() ;

/// @brief Method ArrayCopySafe, addr 0x5ddbce0, size 0x17c, virtual false, abstract: false, final false
static inline void ArrayCopySafe() ;

/// @brief Method BitpackBytesEven, addr 0x5ddc328, size 0x1d0, virtual false, abstract: false, final false
static inline void BitpackBytesEven() ;

/// @brief Method BitpackBytesToULongUneven, addr 0x5ddc4f8, size 0x22c, virtual false, abstract: false, final false
static inline void BitpackBytesToULongUneven() ;

/// @brief Method BitpackBytesUnEven, addr 0x5ddc724, size 0x22c, virtual false, abstract: false, final false
static inline void BitpackBytesUnEven() ;

/// @brief Method ByteForByteWrite, addr 0x5ddbfe0, size 0x204, virtual false, abstract: false, final false
static inline void ByteForByteWrite() ;

static inline ::emotitron::CompressionTests::BenchmarkTests* New_ctor() ;

/// @brief Method Start, addr 0x5ddb014, size 0x54, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TestLog2, addr 0x5ddbe5c, size 0x184, virtual false, abstract: false, final false
static inline void TestLog2() ;

/// @brief Method TestWriterIntegrity, addr 0x5ddb068, size 0xafc, virtual false, abstract: false, final false
static inline void TestWriterIntegrity() ;

/// @brief Method .ctor, addr 0x5ddc950, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint8_t> getStaticF_buffer() ;

static inline ::ArrayW<uint32_t> getStaticF_ibuffer() ;

static inline ::ArrayW<uint64_t> getStaticF_ubuffer() ;

static inline ::ArrayW<uint64_t> getStaticF_ubuffer2() ;

static inline void setStaticF_buffer(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_ibuffer(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_ubuffer(::ArrayW<uint64_t>  value) ;

static inline void setStaticF_ubuffer2(::ArrayW<uint64_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BenchmarkTests() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BenchmarkTests", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BenchmarkTests(BenchmarkTests && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BenchmarkTests", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BenchmarkTests(BenchmarkTests const& ) = delete;

/// @brief Field BYTE_CNT offset 0xffffffff size 0x4
static constexpr int32_t  BYTE_CNT{static_cast<int32_t>(0x80)};

/// @brief Field LOOP offset 0xffffffff size 0x4
static constexpr int32_t  LOOP{static_cast<int32_t>(0xf4240)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5106};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::CompressionTests::BenchmarkTests) == 0x20, "Size mismatch!");

} // namespace end def emotitron::CompressionTests
