#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/OnDestroyNotifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OnDestroyNotifier)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class OnDestroyNotifier;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::OnDestroyNotifier*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::OnDestroyNotifier*, "Unity.XR.CoreUtils", "OnDestroyNotifier");
// [AddComponentMenu("")]
// [ExecuteInEditMode]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.core-utils@2.0/api/Unity.XR.CoreUtils.OnDestroyNotifier.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.OnDestroyNotifier
class CORDL_TYPE OnDestroyNotifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Destroyed, put=set_Destroyed)) ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*  Destroyed;

/// @brief Field <Destroyed>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Destroyed_k__BackingField, put=__cordl_internal_set__Destroyed_k__BackingField)) ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*  _Destroyed_k__BackingField;

static inline ::Unity::XR::CoreUtils::OnDestroyNotifier* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb3f8a7c, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* const& __cordl_internal_get__Destroyed_k__BackingField() const;

constexpr ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*& __cordl_internal_get__Destroyed_k__BackingField() ;

constexpr void __cordl_internal_set__Destroyed_k__BackingField(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*  value) ;

/// @brief Method .ctor, addr 0xb3f8a9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Destroyed, addr 0xb3f8a6c, size 0x8, virtual false, abstract: false, final false
inline ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* get_Destroyed() ;

/// [CompilerGenerated]
/// @brief Method set_Destroyed, addr 0xb3f8a74, size 0x8, virtual false, abstract: false, final false
inline void set_Destroyed(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnDestroyNotifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnDestroyNotifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnDestroyNotifier(OnDestroyNotifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnDestroyNotifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnDestroyNotifier(OnDestroyNotifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30424};

/// [CompilerGenerated]
/// @brief Field <Destroyed>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*  ____Destroyed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::CoreUtils::OnDestroyNotifier, ____Destroyed_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::CoreUtils::OnDestroyNotifier) == 0x28, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
