#pragma once
// IWYU pragma private; include "System/Net/TrackingValidationObjectDictionary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__StringDictionary_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TrackingValidationObjectDictionary)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Net {
class TrackingValidationObjectDictionary_ValidateAndParseValue;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class TrackingValidationObjectDictionary;
}
namespace System::Net {
class TrackingValidationObjectDictionary_ValidateAndParseValue;
}
// Write type traits
MARK_REF_T(::System::Net::TrackingValidationObjectDictionary*);
MARK_REF_T(::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*);
DEFINE_IL2CPP_CLASS(::System::Net::TrackingValidationObjectDictionary*, "System.Net", "TrackingValidationObjectDictionary");
DEFINE_IL2CPP_CLASS(::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*, "System.Net", "TrackingValidationObjectDictionary/ValidateAndParseValue");
// [DefaultMember("Item")]
// Dependencies System.Collections.Specialized.StringDictionary
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TrackingValidationObjectDictionary
class CORDL_TYPE TrackingValidationObjectDictionary : public ::System::Collections::Specialized::StringDictionary {
public:
// Declarations
using ValidateAndParseValue = ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue;

 __declspec(property(get=get_IsChanged, put=set_IsChanged)) bool  IsChanged;

 __declspec(property(get=get_Item, put=set_Item)) ::StringW  Item[];

/// @brief Field <IsChanged>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsChanged_k__BackingField, put=__cordl_internal_set__IsChanged_k__BackingField)) bool  _IsChanged_k__BackingField;

/// @brief Field _internalObjects, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__internalObjects, put=__cordl_internal_set__internalObjects)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _internalObjects;

/// @brief Field _validators, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__validators, put=__cordl_internal_set__validators)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*  _validators;

/// @brief Method Add, addr 0xadb07c0, size 0x8, virtual true, abstract: false, final false
inline void Add(::StringW  key, ::StringW  value) ;

/// @brief Method Clear, addr 0xadb07c8, size 0x64, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method InternalGet, addr 0xadb0638, size 0x84, virtual false, abstract: false, final false
inline ::System::Object* InternalGet(::StringW  key) ;

/// @brief Method InternalSet, addr 0xadb06bc, size 0xf4, virtual false, abstract: false, final false
inline void InternalSet(::StringW  key, ::System::Object*  value) ;

static inline ::System::Net::TrackingValidationObjectDictionary* New_ctor(::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*  validators) ;

/// @brief Method PersistValue, addr 0xadb0444, size 0x1e4, virtual false, abstract: false, final false
inline void PersistValue(::StringW  key, ::StringW  value, bool  addValue) ;

/// @brief Method Remove, addr 0xadb082c, size 0x70, virtual true, abstract: false, final false
inline void Remove(::StringW  key) ;

constexpr bool const& __cordl_internal_get__IsChanged_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsChanged_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get__internalObjects() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get__internalObjects() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>* const& __cordl_internal_get__validators() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*& __cordl_internal_get__validators() ;

constexpr void __cordl_internal_set__IsChanged_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__internalObjects(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__validators(::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*  value) ;

/// @brief Method .ctor, addr 0xadb0410, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*  validators) ;

/// [CompilerGenerated]
/// @brief Method get_IsChanged, addr 0xadb0628, size 0x8, virtual false, abstract: false, final false
inline bool get_IsChanged() ;

/// @brief Method get_Item, addr 0xadb07b0, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Item(::StringW  key) ;

/// [CompilerGenerated]
/// @brief Method set_IsChanged, addr 0xadb0630, size 0x8, virtual false, abstract: false, final false
inline void set_IsChanged(bool  value) ;

/// @brief Method set_Item, addr 0xadb07b8, size 0x8, virtual true, abstract: false, final false
inline void set_Item(::StringW  key, ::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackingValidationObjectDictionary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackingValidationObjectDictionary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackingValidationObjectDictionary(TrackingValidationObjectDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackingValidationObjectDictionary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackingValidationObjectDictionary(TrackingValidationObjectDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10410};

/// @brief Field _validators, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue*>*  ____validators;

/// @brief Field _internalObjects, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ____internalObjects;

/// [CompilerGenerated]
/// @brief Field <IsChanged>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____IsChanged_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::TrackingValidationObjectDictionary, ____validators) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::TrackingValidationObjectDictionary, ____internalObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::TrackingValidationObjectDictionary, ____IsChanged_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::TrackingValidationObjectDictionary) == 0x30, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TrackingValidationObjectDictionary/ValidateAndParseValue
class CORDL_TYPE TrackingValidationObjectDictionary_ValidateAndParseValue : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xadb09b8, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  valueToValidate, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xadb09d8, size 0xc, virtual true, abstract: false, final false
inline ::System::Object* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xadb09a4, size 0x14, virtual true, abstract: false, final false
inline ::System::Object* Invoke(::System::Object*  valueToValidate) ;

static inline ::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xadb089c, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackingValidationObjectDictionary_ValidateAndParseValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackingValidationObjectDictionary_ValidateAndParseValue", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackingValidationObjectDictionary_ValidateAndParseValue(TrackingValidationObjectDictionary_ValidateAndParseValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackingValidationObjectDictionary_ValidateAndParseValue", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackingValidationObjectDictionary_ValidateAndParseValue(TrackingValidationObjectDictionary_ValidateAndParseValue const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10409};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue) == 0x80, "Size mismatch!");

} // namespace end def System::Net
