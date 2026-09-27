#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/InvalidKeyException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__Addressables_MergeMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InvalidKeyException)
namespace GlobalNamespace {
struct Addressables_MergeMode;
}
namespace GlobalNamespace {
struct InvalidKeyException_Format;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class InvalidKeyException;
}
// Write type traits
MARK_REF_T(::UnityEngine::AddressableAssets::InvalidKeyException*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AddressableAssets::InvalidKeyException*, "UnityEngine.AddressableAssets", "InvalidKeyException");
// Dependencies System.Exception, System.Nullable`1<T>, UnityEngine.AddressableAssets.Addressables::MergeMode
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.InvalidKeyException
class CORDL_TYPE InvalidKeyException : public ::System::Exception {
public:
// Declarations
using Format = ::GlobalNamespace::InvalidKeyException_Format;

 __declspec(property(get=get_Key, put=set_Key)) ::System::Object*  Key;

 __declspec(property(get=get_MergeMode)) ::System::Nullable_1<::GlobalNamespace::Addressables_MergeMode>  MergeMode;

 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_Type, put=set_Type)) ::System::Type*  Type;

/// @brief Field <Key>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Key_k__BackingField, put=__cordl_internal_set__Key_k__BackingField)) ::System::Object*  _Key_k__BackingField;

/// @brief Field <MergeMode>k__BackingField, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get__MergeMode_k__BackingField, put=__cordl_internal_set__MergeMode_k__BackingField)) ::System::Nullable_1<::GlobalNamespace::Addressables_MergeMode>  _MergeMode_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::System::Type*  _Type_k__BackingField;

/// @brief Field m_Addressables, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Addressables, put=__cordl_internal_set_m_Addressables)) ::UnityEngine::AddressableAssets::AddressablesImpl*  m_Addressables;

/// @brief Method FormatMergeModeMessage, addr 0xae4e43c, size 0x44c, virtual false, abstract: false, final false
inline ::StringW FormatMergeModeMessage(::GlobalNamespace::InvalidKeyException_Format  format, ::StringW  keysAvailable, ::StringW  keysUnavailable, ::StringW  typeString) ;

/// @brief Method FormatMessage, addr 0xae4dc68, size 0x7d4, virtual false, abstract: false, final false
inline ::StringW FormatMessage(::GlobalNamespace::InvalidKeyException_Format  format, ::StringW  foundWithTypeString) ;

/// @brief Method FormatMultipleAssignableTypesMessage, addr 0xae50844, size 0x1fc, virtual false, abstract: false, final false
inline ::StringW FormatMultipleAssignableTypesMessage(::StringW  keyString, ::System::Collections::Generic::HashSet_1<::System::Type*>*  typesAvailableForKey) ;

/// @brief Method FormatNotFoundMessage, addr 0xae506b0, size 0xc, virtual false, abstract: false, final false
inline ::StringW FormatNotFoundMessage(::StringW  keyString) ;

/// @brief Method FormatTypeNotAssignableMessage, addr 0xae506bc, size 0x188, virtual false, abstract: false, final false
inline ::StringW FormatTypeNotAssignableMessage(::StringW  keyString, ::System::Collections::Generic::HashSet_1<::System::Type*>*  typesAvailableForKey) ;

/// @brief Method GetCSVString, addr 0xae4f03c, size 0x3a0, virtual false, abstract: false, final false
static inline ::StringW GetCSVString(::System::Collections::IEnumerable*  enumerator, ::StringW  prefixSingle, ::StringW  prefixPlural) ;

/// @brief Method GetKeyString, addr 0xae4e888, size 0xe8, virtual false, abstract: false, final false
inline ::StringW GetKeyString() ;

/// @brief Method GetMessageForSingleKey, addr 0xae4efb4, size 0x88, virtual false, abstract: false, final false
inline ::StringW GetMessageForSingleKey(::StringW  keyString) ;

/// @brief Method GetMessageforMergeKeys, addr 0xae4f3dc, size 0xc38, virtual false, abstract: false, final false
inline ::StringW GetMessageforMergeKeys(::System::Collections::Generic::List_1<::StringW>*  keys) ;

/// @brief Method GetTypeToKeys, addr 0xae50a40, size 0x318, virtual false, abstract: false, final false
inline bool GetTypeToKeys(::StringW  key, ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::StringW>*>*  typeToKeys) ;

/// @brief Method GetTypesForKey, addr 0xae50014, size 0x69c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::System::Type*>* GetTypesForKey(::StringW  keyString) ;

static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor() ;

static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object*  key) ;

static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object*  key, ::System::Type*  type) ;

static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object*  key, ::System::Type*  type, ::UnityEngine::AddressableAssets::AddressablesImpl*  addr) ;

static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object*  key, ::System::Type*  type, ::GlobalNamespace::Addressables_MergeMode  mergeMode) ;

static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Object*  key, ::System::Type*  type, ::GlobalNamespace::Addressables_MergeMode  mergeMode, ::UnityEngine::AddressableAssets::AddressablesImpl*  addr) ;

static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::StringW  message) ;

static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

static inline ::UnityEngine::AddressableAssets::InvalidKeyException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  message, ::System::Runtime::Serialization::StreamingContext  context) ;

constexpr ::System::Object* const& __cordl_internal_get__Key_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__Key_k__BackingField() ;

constexpr ::System::Nullable_1<::GlobalNamespace::Addressables_MergeMode> const& __cordl_internal_get__MergeMode_k__BackingField() const;

constexpr ::System::Nullable_1<::GlobalNamespace::Addressables_MergeMode>& __cordl_internal_get__MergeMode_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField() ;

constexpr ::UnityEngine::AddressableAssets::AddressablesImpl* const& __cordl_internal_get_m_Addressables() const;

constexpr ::UnityEngine::AddressableAssets::AddressablesImpl*& __cordl_internal_get_m_Addressables() ;

constexpr void __cordl_internal_set__Key_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__MergeMode_k__BackingField(::System::Nullable_1<::GlobalNamespace::Addressables_MergeMode>  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set_m_Addressables(::UnityEngine::AddressableAssets::AddressablesImpl*  value) ;

/// @brief Method .ctor, addr 0xae4dab8, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xae4d78c, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  key) ;

/// @brief Method .ctor, addr 0xae4d7e0, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  key, ::System::Type*  type) ;

/// @brief Method .ctor, addr 0xae4d868, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  key, ::System::Type*  type, ::UnityEngine::AddressableAssets::AddressablesImpl*  addr) ;

/// @brief Method .ctor, addr 0xae4d90c, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  key, ::System::Type*  type, ::GlobalNamespace::Addressables_MergeMode  mergeMode) ;

/// @brief Method .ctor, addr 0xae4d9d4, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  key, ::System::Type*  type, ::GlobalNamespace::Addressables_MergeMode  mergeMode, ::UnityEngine::AddressableAssets::AddressablesImpl*  addr) ;

/// @brief Method .ctor, addr 0xae4db10, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xae4db78, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xae4dbe8, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  message, ::System::Runtime::Serialization::StreamingContext  context) ;

/// [CompilerGenerated]
/// @brief Method get_Key, addr 0xae4d764, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Key() ;

/// [CompilerGenerated]
/// @brief Method get_MergeMode, addr 0xae4d784, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::Addressables_MergeMode> get_MergeMode() ;

/// @brief Method get_Message, addr 0xae4e970, size 0x644, virtual true, abstract: false, final false
inline ::StringW get_Message() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0xae4d774, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_Type() ;

/// [CompilerGenerated]
/// @brief Method set_Key, addr 0xae4d76c, size 0x8, virtual false, abstract: false, final false
inline void set_Key(::System::Object*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0xae4d77c, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvalidKeyException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidKeyException(InvalidKeyException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidKeyException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidKeyException(InvalidKeyException const& ) = delete;

/// @brief Field BaseInvalidKeyMessageFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  BaseInvalidKeyMessageFormat{u"{0}, Key={1}, Type={2}"};

/// @brief Field IntersectionAvailableMessageFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  IntersectionAvailableMessageFormat{u"\nAn Intersection exists for Type={0}"};

/// @brief Field KeyAvailableAsTypeMessageFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  KeyAvailableAsTypeMessageFormat{u"\nType={0} exists for {1}"};

/// @brief Field MergeModeBaseMessageFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  MergeModeBaseMessageFormat{u"{0} No {1} of Assets between {2} with Type={3}"};

/// @brief Field MergeModeNoLocationMessageFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  MergeModeNoLocationMessageFormat{u"\nNo Location found for Key={0}"};

/// @brief Field MultipleTypeMismatchMessageFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  MultipleTypeMismatchMessageFormat{u"{0} No Asset found for Key={1} with Type={2}. Key exists as multiple Types={3}, which is not assignable from the requested Type={2}"};

/// @brief Field MultipleTypesMessageFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  MultipleTypesMessageFormat{u"{0} Enumerable key contains multiple Types. {1}, all Keys are expected to be strings"};

/// @brief Field NoLocationMessageFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  NoLocationMessageFormat{u"{0} No Location found for Key={1}"};

/// @brief Field NoMergeModeMessageFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  NoMergeModeMessageFormat{u"{0} No MergeMode is set to merge the multiple keys requested. {1}, Type={2}"};

/// @brief Field TypeMismatchMessageFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  TypeMismatchMessageFormat{u"{0} No Asset found for Key={1} with Type={2}. Key exists as Type={3}, which is not assignable from the requested Type={2}"};

/// @brief Field UnionAvailableForKeysMessageFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  UnionAvailableForKeysMessageFormat{u"\nUnion of Type={0} found with {1}"};

/// @brief Field UnionAvailableForKeysWithoutOtherMessageFormat offset 0xffffffff size 0x8
static constexpr ::ConstString  UnionAvailableForKeysWithoutOtherMessageFormat{u"\nUnion of Type={0} found with {1}. Without {2}"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29210};

/// [CompilerGenerated]
/// @brief Field <Key>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::System::Object*  ____Key_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::System::Type*  ____Type_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MergeMode>k__BackingField, offset: 0xa0, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::Addressables_MergeMode>  ____MergeMode_k__BackingField;

/// @brief Field m_Addressables, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::AddressableAssets::AddressablesImpl*  ___m_Addressables;

/// @brief Size padding 0xb0 - 0xb8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException, ____Key_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException, ____Type_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException, ____MergeMode_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::InvalidKeyException, ___m_Addressables) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AddressableAssets::InvalidKeyException) == 0xb0, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets
