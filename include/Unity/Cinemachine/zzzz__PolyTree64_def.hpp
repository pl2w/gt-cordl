#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PolyTree64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__PolyPath64_def.hpp"
CORDL_MODULE_EXPORT(PolyTree64)
// Forward declare root types
namespace Unity::Cinemachine {
class PolyTree64;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::PolyTree64*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::PolyTree64*, "Unity.Cinemachine", "PolyTree64");
// Dependencies Unity.Cinemachine.PolyPath64
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.PolyTree64
class CORDL_TYPE PolyTree64 : public ::Unity::Cinemachine::PolyPath64 {
public:
// Declarations
static inline ::Unity::Cinemachine::PolyTree64* New_ctor() ;

/// @brief Method .ctor, addr 0xaefbc88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolyTree64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolyTree64", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PolyTree64(PolyTree64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolyTree64", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolyTree64(PolyTree64 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22522};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::PolyTree64) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
