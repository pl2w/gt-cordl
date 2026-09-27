#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils_CustomEdgesBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LagCompensationUtils_CustomEdgesBox)
namespace GlobalNamespace {
struct LagCompensationUtils_CustomLine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LagCompensationUtils_CustomEdgesBox;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox, "Fusion.LagCompensation", "LagCompensationUtils/CustomEdgesBox");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.LagCompensation.LagCompensationUtils/CustomEdgesBox
struct CORDL_TYPE LagCompensationUtils_CustomEdgesBox {
public:
// Declarations
 __declspec(property(get=get_E00)) ::GlobalNamespace::LagCompensationUtils_CustomLine  E00;

 __declspec(property(get=get_E01)) ::GlobalNamespace::LagCompensationUtils_CustomLine  E01;

 __declspec(property(get=get_E02)) ::GlobalNamespace::LagCompensationUtils_CustomLine  E02;

 __declspec(property(get=get_E03)) ::GlobalNamespace::LagCompensationUtils_CustomLine  E03;

 __declspec(property(get=get_E04)) ::GlobalNamespace::LagCompensationUtils_CustomLine  E04;

 __declspec(property(get=get_E05)) ::GlobalNamespace::LagCompensationUtils_CustomLine  E05;

 __declspec(property(get=get_E06)) ::GlobalNamespace::LagCompensationUtils_CustomLine  E06;

 __declspec(property(get=get_E07)) ::GlobalNamespace::LagCompensationUtils_CustomLine  E07;

 __declspec(property(get=get_E08)) ::GlobalNamespace::LagCompensationUtils_CustomLine  E08;

 __declspec(property(get=get_E09)) ::GlobalNamespace::LagCompensationUtils_CustomLine  E09;

 __declspec(property(get=get_E10)) ::GlobalNamespace::LagCompensationUtils_CustomLine  E10;

 __declspec(property(get=get_E11)) ::GlobalNamespace::LagCompensationUtils_CustomLine  E11;

/// @brief Method get_E00, addr 0x6017070, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_CustomLine get_E00() ;

/// @brief Method get_E01, addr 0x6017098, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_CustomLine get_E01() ;

/// @brief Method get_E02, addr 0x60170b0, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_CustomLine get_E02() ;

/// @brief Method get_E03, addr 0x60170c8, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_CustomLine get_E03() ;

/// @brief Method get_E04, addr 0x60170ec, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_CustomLine get_E04() ;

/// @brief Method get_E05, addr 0x6017104, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_CustomLine get_E05() ;

/// @brief Method get_E06, addr 0x601711c, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_CustomLine get_E06() ;

/// @brief Method get_E07, addr 0x6017134, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_CustomLine get_E07() ;

/// @brief Method get_E08, addr 0x601715c, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_CustomLine get_E08() ;

/// @brief Method get_E09, addr 0x6017180, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_CustomLine get_E09() ;

/// @brief Method get_E10, addr 0x60171a8, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_CustomLine get_E10() ;

/// @brief Method get_E11, addr 0x60171d0, size 0x28, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_CustomLine get_E11() ;

// Ctor Parameters []
// @brief default ctor
constexpr LagCompensationUtils_CustomEdgesBox() ;

// Ctor Parameters [CppParam { name: "P0", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "P1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "P2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "P3", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "P4", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "P5", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "P6", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "P7", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr LagCompensationUtils_CustomEdgesBox(::UnityEngine::Vector3  P0, ::UnityEngine::Vector3  P1, ::UnityEngine::Vector3  P2, ::UnityEngine::Vector3  P3, ::UnityEngine::Vector3  P4, ::UnityEngine::Vector3  P5, ::UnityEngine::Vector3  P6, ::UnityEngine::Vector3  P7) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19394};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field P0, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  P0;

/// @brief Field P1, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  P1;

/// @brief Field P2, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  P2;

/// @brief Field P3, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  P3;

/// @brief Field P4, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  P4;

/// @brief Field P5, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  P5;

/// @brief Field P6, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  P6;

/// @brief Field P7, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  P7;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox, P0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox, P1) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox, P2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox, P3) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox, P4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox, P5) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox, P6) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox, P7) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LagCompensationUtils_CustomEdgesBox) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
