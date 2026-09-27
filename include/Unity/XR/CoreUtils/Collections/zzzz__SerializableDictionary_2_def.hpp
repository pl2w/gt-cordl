#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Collections/SerializableDictionary_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
CORDL_MODULE_EXPORT(SerializableDictionary_2)
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct SerializableDictionary_2_Item;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Collections {
template<typename TKey,typename TValue>
class SerializableDictionary_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::XR::CoreUtils::Collections::SerializableDictionary_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::XR::CoreUtils::Collections::SerializableDictionary_2, "Unity.XR.CoreUtils.Collections", "SerializableDictionary`2");
// Dependencies System.Collections.Generic.Dictionary`2<TKey, TValue>
namespace Unity::XR::CoreUtils::Collections {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Collections.SerializableDictionary`2<TKey,TValue>
class CORDL_TYPE SerializableDictionary_2 : public ::System::Collections::Generic::Dictionary_2<TKey,TValue> {
public:
// Declarations
using Item = ::GlobalNamespace::SerializableDictionary_2_Item<TKey, TValue>;

 __declspec(property(get=get_SerializedItems)) ::System::Collections::Generic::List_1<::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>>*  SerializedItems;

/// @brief Field m_Items, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Items, put=__cordl_internal_set_m_Items)) ::System::Collections::Generic::List_1<::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>>*  m_Items;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>* New_ctor() ;

static inline ::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<TKey,TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  input) ;

/// @brief Method OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnBeforeSerialize() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>>* const& __cordl_internal_get_m_Items() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>>*& __cordl_internal_get_m_Items() ;

constexpr void __cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  input) ;

/// @brief Method get_SerializedItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>>* get_SerializedItems() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializableDictionary_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializableDictionary_2(SerializableDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializableDictionary_2(SerializableDictionary_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30453};

/// [SerializeField]
/// @brief Field m_Items, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>>*  ___m_Items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::CoreUtils::Collections
