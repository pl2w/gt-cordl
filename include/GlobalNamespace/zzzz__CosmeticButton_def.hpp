#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CosmeticButton)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticButton*, "", "CosmeticButton");
// Dependencies GorillaPressableButton, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticButton
class CORDL_TYPE CosmeticButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

/// @brief Field SetCosmeticItemID, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_SetCosmeticItemID, put=__cordl_internal_set_SetCosmeticItemID)) ::StringW  SetCosmeticItemID;

/// @brief Field <Initialized>k__BackingField, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized_k__BackingField, put=__cordl_internal_set__Initialized_k__BackingField)) bool  _Initialized_k__BackingField;

/// @brief Field disabledMaterial, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_disabledMaterial, put=__cordl_internal_set_disabledMaterial)) ::UnityW<::UnityEngine::Material>  disabledMaterial;

/// @brief Field disabledOffset, offset 0xd0, size 0xc 
 __declspec(property(get=__cordl_internal_get_disabledOffset, put=__cordl_internal_set_disabledOffset)) ::UnityEngine::Vector3  disabledOffset;

/// @brief Field posOffset, offset 0xe8, size 0xc 
 __declspec(property(get=__cordl_internal_get_posOffset, put=__cordl_internal_set_posOffset)) ::UnityEngine::Vector3  posOffset;

/// @brief Field pressedOffset, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get_pressedOffset, put=__cordl_internal_set_pressedOffset)) ::UnityEngine::Vector3  pressedOffset;

/// @brief Field startingPos, offset 0xdc, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingPos, put=__cordl_internal_set_startingPos)) ::UnityEngine::Vector3  startingPos;

/// @brief Method AllowNonSubscribedPress, addr 0x57831d8, size 0xfc, virtual true, abstract: false, final false
inline bool AllowNonSubscribedPress() ;

/// @brief Method Awake, addr 0x5782d88, size 0x38, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::CosmeticButton* New_ctor() ;

/// @brief Method UpdateColor, addr 0x5782dc0, size 0x1b0, virtual true, abstract: false, final false
inline void UpdateColor() ;

/// @brief Method UpdatePosition, addr 0x5782f70, size 0x268, virtual true, abstract: false, final false
inline void UpdatePosition() ;

constexpr ::StringW const& __cordl_internal_get_SetCosmeticItemID() const;

constexpr ::StringW& __cordl_internal_get_SetCosmeticItemID() ;

constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__Initialized_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_disabledMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_disabledMaterial() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_disabledOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_disabledOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_posOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_posOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pressedOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pressedOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingPos() ;

constexpr void __cordl_internal_set_SetCosmeticItemID(::StringW  value) ;

constexpr void __cordl_internal_set__Initialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_disabledMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_disabledOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_posOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pressedOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startingPos(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x57832d4, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Initialized, addr 0x5782d78, size 0x8, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// [CompilerGenerated]
/// @brief Method set_Initialized, addr 0x5782d80, size 0x8, virtual false, abstract: false, final false
inline void set_Initialized(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticButton(CosmeticButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticButton(CosmeticButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1406};

/// [SerializeField]
/// @brief Field pressedOffset, offset: 0xb8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pressedOffset;

/// [SerializeField]
/// @brief Field disabledMaterial, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___disabledMaterial;

/// [SerializeField]
/// @brief Field disabledOffset, offset: 0xd0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___disabledOffset;

/// @brief Field startingPos, offset: 0xdc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingPos;

/// @brief Field posOffset, offset: 0xe8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___posOffset;

/// @brief Field SetCosmeticItemID, offset: 0xf8, size: 0x8, def value: None
 ::StringW  ___SetCosmeticItemID;

/// [CompilerGenerated]
/// @brief Field <Initialized>k__BackingField, offset: 0x100, size: 0x1, def value: None
 bool  ____Initialized_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticButton, ___pressedOffset) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticButton, ___disabledMaterial) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticButton, ___disabledOffset) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticButton, ___startingPos) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticButton, ___posOffset) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticButton, ___SetCosmeticItemID) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticButton, ____Initialized_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticButton) == 0x108, "Size mismatch!");

} // namespace end def GlobalNamespace
