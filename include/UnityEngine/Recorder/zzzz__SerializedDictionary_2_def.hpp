#pragma once
// IWYU pragma private; include "UnityEngine/Recorder/SerializedDictionary_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializedDictionary_2)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Recorder {
template<typename TKey,typename TValue>
class SerializedDictionary_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Recorder::SerializedDictionary_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Recorder::SerializedDictionary_2, "UnityEngine.Recorder", "SerializedDictionary`2");
// Dependencies System.Object
namespace UnityEngine::Recorder {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: UnityEngine.Recorder.SerializedDictionary`2<TKey,TValue>
class CORDL_TYPE SerializedDictionary_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_dictionary)) ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary;

/// @brief Field m_Dictionary, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Dictionary, put=__cordl_internal_set_m_Dictionary)) ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  m_Dictionary;

/// @brief Field m_Keys, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Keys, put=__cordl_internal_set_m_Keys)) ::System::Collections::Generic::List_1<TKey>*  m_Keys;

/// @brief Field m_Values, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Values, put=__cordl_internal_set_m_Values)) ::System::Collections::Generic::List_1<TValue>*  m_Values;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::UnityEngine::Recorder::SerializedDictionary_2<TKey,TValue>* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>* const& __cordl_internal_get_m_Dictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>*& __cordl_internal_get_m_Dictionary() ;

constexpr ::System::Collections::Generic::List_1<TKey>* const& __cordl_internal_get_m_Keys() const;

constexpr ::System::Collections::Generic::List_1<TKey>*& __cordl_internal_get_m_Keys() ;

constexpr ::System::Collections::Generic::List_1<TValue>* const& __cordl_internal_get_m_Values() const;

constexpr ::System::Collections::Generic::List_1<TValue>*& __cordl_internal_get_m_Values() ;

constexpr void __cordl_internal_set_m_Dictionary(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  value) ;

constexpr void __cordl_internal_set_m_Keys(::System::Collections::Generic::List_1<TKey>*  value) ;

constexpr void __cordl_internal_set_m_Values(::System::Collections::Generic::List_1<TValue>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_dictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<TKey,TValue>* get_dictionary() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializedDictionary_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializedDictionary_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializedDictionary_2(SerializedDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializedDictionary_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializedDictionary_2(SerializedDictionary_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33014};

/// [SerializeField]
/// @brief Field m_Keys, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<TKey>*  ___m_Keys;

/// [SerializeField]
/// @brief Field m_Values, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<TValue>*  ___m_Values;

/// @brief Field m_Dictionary, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  ___m_Dictionary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Recorder
