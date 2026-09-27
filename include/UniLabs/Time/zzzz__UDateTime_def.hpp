#pragma once
// IWYU pragma private; include "UniLabs/Time/UDateTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UDateTime)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UniLabs::Time {
class UDateTime;
}
// Write type traits
MARK_REF_T(::UniLabs::Time::UDateTime*);
DEFINE_IL2CPP_CLASS(::UniLabs::Time::UDateTime*, "UniLabs.Time", "UDateTime");
// [JsonObject((Newtonsoft.Json.MemberSerialization)1)]
// Dependencies System.DateTime, System.Object
namespace UniLabs::Time {
// Is value type: false
// CS Name: UniLabs.Time.UDateTime
class CORDL_TYPE UDateTime : public ::System::Object {
public:
// Declarations
/// @brief [JsonProperty("DateTime")]
 __declspec(property(get=get_DateTime, put=set_DateTime)) ::System::DateTime  DateTime;

/// @brief Field _DateTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__DateTime, put=__cordl_internal_set__DateTime)) ::StringW  _DateTime;

/// @brief Field <DateTime>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__DateTime_k__BackingField, put=__cordl_internal_set__DateTime_k__BackingField)) ::System::DateTime  _DateTime_k__BackingField;

/// @brief Convert operator to "::System::IComparable_1<::System::DateTime>"
constexpr operator  ::System::IComparable_1<::System::DateTime>*() noexcept;

/// @brief Convert operator to "::System::IComparable_1<::UniLabs::Time::UDateTime*>"
constexpr operator  ::System::IComparable_1<::UniLabs::Time::UDateTime*>*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method CompareTo, addr 0x5b6db28, size 0x74, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::DateTime  other) ;

/// @brief Method CompareTo, addr 0x5b6db9c, size 0x98, virtual true, abstract: false, final true
inline int32_t CompareTo(::UniLabs::Time::UDateTime*  other) ;

/// @brief Method Equals, addr 0x5b6dcb8, size 0x100, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5b6dc34, size 0x84, virtual false, abstract: false, final false
inline bool Equals(::UniLabs::Time::UDateTime*  other) ;

/// @brief Method GetHashCode, addr 0x5b6ddb8, size 0x6c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [JsonConstructor]
static inline ::UniLabs::Time::UDateTime* New_ctor() ;

static inline ::UniLabs::Time::UDateTime* New_ctor(::System::DateTime  dateTime) ;

/// @brief Method OnAfterDeserialize, addr 0x5b6dec8, size 0xd8, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x5b6dfa0, size 0xcc, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// [OnDeserialized]
/// @brief Method OnDeserialized, addr 0x5b6e070, size 0x4, virtual false, abstract: false, final false
inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext  context) ;

/// [OnSerializing]
/// @brief Method OnSerializing, addr 0x5b6e06c, size 0x4, virtual false, abstract: false, final false
inline void OnSerializing(::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method ToString, addr 0x5b6de24, size 0xa4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__DateTime() const;

constexpr ::StringW& __cordl_internal_get__DateTime() ;

constexpr ::System::DateTime const& __cordl_internal_get__DateTime_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__DateTime_k__BackingField() ;

constexpr void __cordl_internal_set__DateTime(::StringW  value) ;

constexpr void __cordl_internal_set__DateTime_k__BackingField(::System::DateTime  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x5b6da20, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5b6da8c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  dateTime) ;

/// [CompilerGenerated]
/// @brief Method get_DateTime, addr 0x5b6da10, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateTime() ;

/// @brief Convert to "::System::IComparable_1<::System::DateTime>"
constexpr ::System::IComparable_1<::System::DateTime>* i___System__IComparable_1___System__DateTime_() noexcept;

/// @brief Convert to "::System::IComparable_1<::UniLabs::Time::UDateTime*>"
constexpr ::System::IComparable_1<::UniLabs::Time::UDateTime*>* i___System__IComparable_1___UniLabs__Time__UDateTime__() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method op_Implicit, addr 0x5b6dab4, size 0x14, virtual false, abstract: false, final false
static inline ::System::DateTime op_Implicit___System__DateTime(::UniLabs::Time::UDateTime*  udt) ;

/// @brief Method op_Implicit, addr 0x5b6dac8, size 0x60, virtual false, abstract: false, final false
static inline ::UniLabs::Time::UDateTime* op_Implicit___UniLabs__Time__UDateTime_(::System::DateTime  dt) ;

/// [CompilerGenerated]
/// @brief Method set_DateTime, addr 0x5b6da18, size 0x8, virtual false, abstract: false, final false
inline void set_DateTime(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UDateTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UDateTime", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UDateTime(UDateTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UDateTime", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UDateTime(UDateTime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3856};

/// [CompilerGenerated]
/// @brief Field <DateTime>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ____DateTime_k__BackingField;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _DateTime, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____DateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UniLabs::Time::UDateTime, ____DateTime_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UniLabs::Time::UDateTime, ____DateTime) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UniLabs::Time::UDateTime) == 0x20, "Size mismatch!");

} // namespace end def UniLabs::Time
