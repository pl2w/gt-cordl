#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ConfinerOven_PolygonSolution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ConfinerOven_PolygonSolution)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct Point64;
}
// Forward declare root types
namespace GlobalNamespace {
struct ConfinerOven_PolygonSolution;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConfinerOven_PolygonSolution);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConfinerOven_PolygonSolution, "Unity.Cinemachine", "ConfinerOven/PolygonSolution");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.ConfinerOven/PolygonSolution
struct CORDL_TYPE ConfinerOven_PolygonSolution {
public:
// Declarations
 __declspec(property(get=get_IsNull)) bool  IsNull;

/// @brief Method StateChanged, addr 0xaeb6520, size 0xf4, virtual false, abstract: false, final false
inline bool StateChanged(/* [IsReadOnly] */ ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*>  paths) ;

/// @brief Method get_IsNull, addr 0xaeb6614, size 0x10, virtual false, abstract: false, final false
inline bool get_IsNull() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConfinerOven_PolygonSolution() ;

// Ctor Parameters [CppParam { name: "polygons", ty: "::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "frustumHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ConfinerOven_PolygonSolution(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  polygons, float_t  frustumHeight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22312};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field polygons, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  polygons;

/// @brief Field frustumHeight, offset: 0x8, size: 0x4, def value: None
 float_t  frustumHeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConfinerOven_PolygonSolution, polygons) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConfinerOven_PolygonSolution, frustumHeight) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConfinerOven_PolygonSolution) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
