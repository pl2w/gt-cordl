#pragma once
// IWYU pragma private; include "UnityEngine/Splines/RamerDouglasPeucker`1_Range.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RamerDouglasPeucker`1_Range)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct RamerDouglasPeucker_1_Range;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::RamerDouglasPeucker_1_Range);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::RamerDouglasPeucker_1_Range, "UnityEngine.Splines", "RamerDouglasPeucker`1/Range");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Splines.RamerDouglasPeucker`1/Range<T>
struct CORDL_TYPE RamerDouglasPeucker_1_Range {
public:
// Declarations
 __declspec(property(get=get_End)) int32_t  End;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  start, int32_t  count) ;

/// @brief Method get_End, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_End() ;

// Ctor Parameters []
// @brief default ctor
constexpr RamerDouglasPeucker_1_Range() ;

// Ctor Parameters [CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RamerDouglasPeucker_1_Range(int32_t  Start, int32_t  Count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Start, offset: 0x0, size: 0x4, def value: None
 int32_t  Start;

/// @brief Field Count, offset: 0x4, size: 0x4, def value: None
 int32_t  Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
