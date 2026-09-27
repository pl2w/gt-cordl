#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventVolumeObserver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RigEventVolumeObserver_RigEventVolumeObserverGameObject_Comparison_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RigEventVolumeObserver)
namespace GlobalNamespace {
struct RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison;
}
namespace GlobalNamespace {
class RigEventVolumeObserver_RigEventVolumeObserverGameObject;
}
namespace GlobalNamespace {
class RigEventVolume;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class RigEventVolumeObserver;
}
namespace GlobalNamespace {
class RigEventVolumeObserver_RigEventVolumeObserverGameObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RigEventVolumeObserver*);
MARK_REF_T(::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigEventVolumeObserver*, "", "RigEventVolumeObserver");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*, "", "RigEventVolumeObserver/RigEventVolumeObserverGameObject");
// Dependencies RigEventVolumeObserver::RigEventVolumeObserverGameObject, TMPro.TMP_Text, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigEventVolumeObserver
class CORDL_TYPE RigEventVolumeObserver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RigEventVolumeObserverGameObject = ::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject;

/// @brief Field formats, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_formats, put=__cordl_internal_set_formats)) ::System::Collections::Generic::List_1<::StringW>*  formats;

/// @brief Field gameObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjects, put=__cordl_internal_set_gameObjects)) ::ArrayW<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>  gameObjects;

/// @brief Field observed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_observed, put=__cordl_internal_set_observed)) ::UnityW<::GlobalNamespace::RigEventVolume>  observed;

/// @brief Field tMP_Texts, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tMP_Texts, put=__cordl_internal_set_tMP_Texts)) ::ArrayW<::UnityW<::TMPro::TMP_Text>>  tMP_Texts;

/// @brief Method Awake, addr 0x57440dc, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Format, addr 0x574441c, size 0x88, virtual false, abstract: false, final false
inline ::StringW Format(::StringW  s) ;

static inline ::GlobalNamespace::RigEventVolumeObserver* New_ctor() ;

/// @brief Method Observed_OnCountChanged, addr 0x5744264, size 0x104, virtual false, abstract: false, final false
inline void Observed_OnCountChanged() ;

/// @brief Method OnDisable, addr 0x5744368, size 0x8c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57441d0, size 0x94, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_formats() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_formats() ;

constexpr ::ArrayW<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*> const& __cordl_internal_get_gameObjects() const;

constexpr ::ArrayW<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>& __cordl_internal_get_gameObjects() ;

constexpr ::UnityW<::GlobalNamespace::RigEventVolume> const& __cordl_internal_get_observed() const;

constexpr ::UnityW<::GlobalNamespace::RigEventVolume>& __cordl_internal_get_observed() ;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& __cordl_internal_get_tMP_Texts() const;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& __cordl_internal_get_tMP_Texts() ;

constexpr void __cordl_internal_set_formats(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_gameObjects(::ArrayW<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>  value) ;

constexpr void __cordl_internal_set_observed(::UnityW<::GlobalNamespace::RigEventVolume>  value) ;

constexpr void __cordl_internal_set_tMP_Texts(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value) ;

/// @brief Method .ctor, addr 0x57444a4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigEventVolumeObserver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigEventVolumeObserver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigEventVolumeObserver(RigEventVolumeObserver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigEventVolumeObserver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigEventVolumeObserver(RigEventVolumeObserver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1256};

/// [SerializeField]
/// @brief Field observed, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigEventVolume>  ___observed;

/// [SerializeField]
/// @brief Field gameObjects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>  ___gameObjects;

/// [SerializeField]
/// @brief Field tMP_Texts, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ___tMP_Texts;

/// @brief Field formats, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___formats;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigEventVolumeObserver, ___observed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolumeObserver, ___gameObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolumeObserver, ___tMP_Texts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolumeObserver, ___formats) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigEventVolumeObserver) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies RigEventVolumeObserver::RigEventVolumeObserverGameObject::Comparison, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigEventVolumeObserver/RigEventVolumeObserverGameObject
class CORDL_TYPE RigEventVolumeObserver_RigEventVolumeObserverGameObject : public ::System::Object {
public:
// Declarations
using Comparison = ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison;

/// @brief Field comparison, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_comparison, put=__cordl_internal_set_comparison)) ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison  comparison;

/// @brief Field gameObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObject, put=__cordl_internal_set_gameObject)) ::UnityW<::UnityEngine::GameObject>  gameObject;

/// @brief Field value, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) int32_t  value;

/// @brief Method ApplyActiveState, addr 0x57443f4, size 0x28, virtual false, abstract: false, final false
inline void ApplyActiveState(::GlobalNamespace::RigEventVolume*  rev) ;

/// @brief Method Check, addr 0x574452c, size 0xf4, virtual false, abstract: false, final false
inline bool Check(::GlobalNamespace::RigEventVolume*  rev) ;

static inline ::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject* New_ctor() ;

constexpr ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison const& __cordl_internal_get_comparison() const;

constexpr ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison& __cordl_internal_get_comparison() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject() ;

constexpr int32_t const& __cordl_internal_get_value() const;

constexpr int32_t& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_comparison(::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison  value) ;

constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_value(int32_t  value) ;

/// @brief Method .ctor, addr 0x5744620, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigEventVolumeObserver_RigEventVolumeObserverGameObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigEventVolumeObserver_RigEventVolumeObserverGameObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigEventVolumeObserver_RigEventVolumeObserverGameObject(RigEventVolumeObserver_RigEventVolumeObserverGameObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigEventVolumeObserver_RigEventVolumeObserverGameObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigEventVolumeObserver_RigEventVolumeObserverGameObject(RigEventVolumeObserver_RigEventVolumeObserverGameObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1255};

/// [SerializeField]
/// @brief Field gameObject, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gameObject;

/// [SerializeField]
/// @brief Field comparison, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison  ___comparison;

/// [SerializeField]
/// @brief Field value, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject, ___gameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject, ___comparison) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject, ___value) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
