#pragma once
// IWYU pragma private; include "UniLabs/Time/UTimeSpan.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UTimeSpan)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UniLabs::Time {
class UTimeSpan;
}
// Write type traits
MARK_REF_T(::UniLabs::Time::UTimeSpan*);
DEFINE_IL2CPP_CLASS(::UniLabs::Time::UTimeSpan*, "UniLabs.Time", "UTimeSpan");
// [JsonObject((Newtonsoft.Json.MemberSerialization)1)]
// Dependencies System.Object, System.TimeSpan
namespace UniLabs::Time {
// Is value type: false
// CS Name: UniLabs.Time.UTimeSpan
class CORDL_TYPE UTimeSpan : public ::System::Object {
public:
// Declarations
/// @brief [JsonProperty("TimeSpan")]
 __declspec(property(get=get_TimeSpan, put=set_TimeSpan)) ::System::TimeSpan  TimeSpan;

/// @brief Field _TimeSpan, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__TimeSpan, put=__cordl_internal_set__TimeSpan)) ::StringW  _TimeSpan;

/// @brief Field <TimeSpan>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__TimeSpan_k__BackingField, put=__cordl_internal_set__TimeSpan_k__BackingField)) ::System::TimeSpan  _TimeSpan_k__BackingField;

/// @brief Convert operator to "::System::IComparable_1<::System::TimeSpan>"
constexpr operator  ::System::IComparable_1<::System::TimeSpan>*() noexcept;

/// @brief Convert operator to "::System::IComparable_1<::UniLabs::Time::UTimeSpan*>"
constexpr operator  ::System::IComparable_1<::UniLabs::Time::UTimeSpan*>*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method CompareTo, addr 0x5b6e2b8, size 0x74, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::TimeSpan  other) ;

/// @brief Method CompareTo, addr 0x5b6e32c, size 0x98, virtual true, abstract: false, final true
inline int32_t CompareTo(::UniLabs::Time::UTimeSpan*  other) ;

/// @brief Method Equals, addr 0x5b6e448, size 0x100, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5b6e3c4, size 0x84, virtual false, abstract: false, final false
inline bool Equals(::UniLabs::Time::UTimeSpan*  other) ;

/// @brief Method GetHashCode, addr 0x5b6e548, size 0x6c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief [JsonConstructor]
static inline ::UniLabs::Time::UTimeSpan* New_ctor() ;

static inline ::UniLabs::Time::UTimeSpan* New_ctor(int32_t  days, int32_t  hours, int32_t  minutes, int32_t  seconds) ;

static inline ::UniLabs::Time::UTimeSpan* New_ctor(int32_t  days, int32_t  hours, int32_t  minutes, int32_t  seconds, int32_t  milliseconds) ;

static inline ::UniLabs::Time::UTimeSpan* New_ctor(int32_t  hours, int32_t  minutes, int32_t  seconds) ;

static inline ::UniLabs::Time::UTimeSpan* New_ctor(int64_t  ticks) ;

static inline ::UniLabs::Time::UTimeSpan* New_ctor(::System::TimeSpan  timeSpan) ;

/// @brief Method OnAfterDeserialize, addr 0x5b6e5b4, size 0xd0, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x5b6e684, size 0x7c, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// [OnDeserialized]
/// @brief Method OnDeserializedMethod, addr 0x5b6e704, size 0x4, virtual false, abstract: false, final false
inline void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext  context) ;

/// [OnSerializing]
/// @brief Method OnSerializingMethod, addr 0x5b6e700, size 0x4, virtual false, abstract: false, final false
inline void OnSerializingMethod(::System::Runtime::Serialization::StreamingContext  context) ;

constexpr ::StringW const& __cordl_internal_get__TimeSpan() const;

constexpr ::StringW& __cordl_internal_get__TimeSpan() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__TimeSpan_k__BackingField() const;

constexpr ::System::TimeSpan& __cordl_internal_get__TimeSpan_k__BackingField() ;

constexpr void __cordl_internal_set__TimeSpan(::StringW  value) ;

constexpr void __cordl_internal_set__TimeSpan_k__BackingField(::System::TimeSpan  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x5b6e084, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5b6e17c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(int32_t  days, int32_t  hours, int32_t  minutes, int32_t  seconds) ;

/// @brief Method .ctor, addr 0x5b6e1b8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(int32_t  days, int32_t  hours, int32_t  minutes, int32_t  seconds, int32_t  milliseconds) ;

/// @brief Method .ctor, addr 0x5b6e140, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(int32_t  hours, int32_t  minutes, int32_t  seconds) ;

/// @brief Method .ctor, addr 0x5b6e118, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int64_t  ticks) ;

/// @brief Method .ctor, addr 0x5b6e0f0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  timeSpan) ;

/// [CompilerGenerated]
/// @brief Method get_TimeSpan, addr 0x5b6e074, size 0x8, virtual false, abstract: false, final false
inline ::System::TimeSpan get_TimeSpan() ;

/// @brief Convert to "::System::IComparable_1<::System::TimeSpan>"
constexpr ::System::IComparable_1<::System::TimeSpan>* i___System__IComparable_1___System__TimeSpan_() noexcept;

/// @brief Convert to "::System::IComparable_1<::UniLabs::Time::UTimeSpan*>"
constexpr ::System::IComparable_1<::UniLabs::Time::UTimeSpan*>* i___System__IComparable_1___UniLabs__Time__UTimeSpan__() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method op_Implicit, addr 0x5b6e1f4, size 0x68, virtual false, abstract: false, final false
static inline ::System::TimeSpan op_Implicit___System__TimeSpan(::UniLabs::Time::UTimeSpan*  uTimeSpan) ;

/// @brief Method op_Implicit, addr 0x5b6e25c, size 0x5c, virtual false, abstract: false, final false
static inline ::UniLabs::Time::UTimeSpan* op_Implicit___UniLabs__Time__UTimeSpan_(::System::TimeSpan  timeSpan) ;

/// [CompilerGenerated]
/// @brief Method set_TimeSpan, addr 0x5b6e07c, size 0x8, virtual false, abstract: false, final false
inline void set_TimeSpan(::System::TimeSpan  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UTimeSpan() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UTimeSpan", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UTimeSpan(UTimeSpan && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTimeSpan", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTimeSpan(UTimeSpan const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3857};

/// [CompilerGenerated]
/// @brief Field <TimeSpan>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::TimeSpan  ____TimeSpan_k__BackingField;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field _TimeSpan, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____TimeSpan;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UniLabs::Time::UTimeSpan, ____TimeSpan_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UniLabs::Time::UTimeSpan, ____TimeSpan) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UniLabs::Time::UTimeSpan) == 0x20, "Size mismatch!");

} // namespace end def UniLabs::Time
