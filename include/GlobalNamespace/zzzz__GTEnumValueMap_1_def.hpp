#pragma once
// IWYU pragma private; include "GlobalNamespace/GTEnumValueMap_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTEnumValueMap_1)
namespace GlobalNamespace {
template<typename T>
struct GTEnumValueMap_1_EnumValueToUnityObject;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GTEnumValueMap_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::GTEnumValueMap_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GTEnumValueMap_1, "", "GTEnumValueMap`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GTEnumValueMap`1<T>
class CORDL_TYPE GTEnumValueMap_1 : public ::System::Object {
public:
// Declarations
using EnumValueToUnityObject = ::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject<T>;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::IEnumerable_1<T>*  Values;

/// @brief Field _enumValue_to_unityObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__enumValue_to_unityObject, put=__cordl_internal_set__enumValue_to_unityObject)) ::System::Collections::Generic::Dictionary_2<int64_t,T>*  _enumValue_to_unityObject;

/// @brief Field m_enumScriptGuid, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_enumScriptGuid, put=__cordl_internal_set_m_enumScriptGuid)) ::StringW  m_enumScriptGuid;

/// @brief Field m_enumValueAndUnityObjectPairs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_enumValueAndUnityObjectPairs, put=__cordl_internal_set_m_enumValueAndUnityObjectPairs)) ::System::Collections::Generic::List_1<::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject<T>>*  m_enumValueAndUnityObjectPairs;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Init() ;

static inline ::GlobalNamespace::GTEnumValueMap_1<T>* New_ctor() ;

/// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGet(int64_t  i, ::by_ref<T>  o) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,T>* const& __cordl_internal_get__enumValue_to_unityObject() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,T>*& __cordl_internal_get__enumValue_to_unityObject() ;

constexpr ::StringW const& __cordl_internal_get_m_enumScriptGuid() const;

constexpr ::StringW& __cordl_internal_get_m_enumScriptGuid() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject<T>>* const& __cordl_internal_get_m_enumValueAndUnityObjectPairs() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject<T>>*& __cordl_internal_get_m_enumValueAndUnityObjectPairs() ;

constexpr void __cordl_internal_set__enumValue_to_unityObject(::System::Collections::Generic::Dictionary_2<int64_t,T>*  value) ;

constexpr void __cordl_internal_set_m_enumScriptGuid(::StringW  value) ;

constexpr void __cordl_internal_set_m_enumValueAndUnityObjectPairs(::System::Collections::Generic::List_1<::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject<T>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<T>* get_Values() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTEnumValueMap_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTEnumValueMap_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTEnumValueMap_1(GTEnumValueMap_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTEnumValueMap_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTEnumValueMap_1(GTEnumValueMap_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{675};

/// @brief Field _enumValue_to_unityObject, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,T>*  ____enumValue_to_unityObject;

/// [Tooltip("The GUID to the Enum script asset which is what is serialized in editor (not used at runtime). This is exposed and editable as a precaution but shouldn\'t be necessary to have to use.")]
/// [SerializeField]
/// @brief Field m_enumScriptGuid, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_enumScriptGuid;

/// [SerializeField]
/// @brief Field m_enumValueAndUnityObjectPairs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GTEnumValueMap_1_EnumValueToUnityObject<T>>*  ___m_enumValueAndUnityObjectPairs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
