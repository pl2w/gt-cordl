#pragma once
// IWYU pragma private; include "emotitron/CompressionTests/BasicWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicWriter)
// Forward declare root types
namespace emotitron::CompressionTests {
class BasicWriter;
}
// Write type traits
MARK_REF_T(::emotitron::CompressionTests::BasicWriter*);
DEFINE_IL2CPP_CLASS(::emotitron::CompressionTests::BasicWriter*, "emotitron.CompressionTests", "BasicWriter");
// Dependencies System.Object
namespace emotitron::CompressionTests {
// Is value type: false
// CS Name: emotitron.CompressionTests.BasicWriter
class CORDL_TYPE BasicWriter : public ::System::Object {
public:
// Declarations
/// @brief Field pos, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_pos, put=setStaticF_pos)) int32_t  pos;

/// @brief Method BasicRead, addr 0x5ddc2b4, size 0x74, virtual false, abstract: false, final false
static inline uint8_t BasicRead(::ArrayW<uint8_t>  buffer) ;

/// @brief Method BasicWrite, addr 0x5ddc22c, size 0x88, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> BasicWrite(::ArrayW<uint8_t>  buffer, uint8_t  value) ;

static inline ::emotitron::CompressionTests::BasicWriter* New_ctor() ;

/// @brief Method Reset, addr 0x5ddc1e4, size 0x48, virtual false, abstract: false, final false
static inline void Reset() ;

/// @brief Method .ctor, addr 0x5ddca68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_pos() ;

static inline void setStaticF_pos(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicWriter(BasicWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicWriter(BasicWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5107};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::CompressionTests::BasicWriter) == 0x10, "Size mismatch!");

} // namespace end def emotitron::CompressionTests
