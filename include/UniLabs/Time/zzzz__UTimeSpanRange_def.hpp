#pragma once
// IWYU pragma private; include "UniLabs/Time/UTimeSpanRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UTimeSpanRange)
namespace System {
struct TimeSpan;
}
namespace UniLabs::Time {
class UTimeSpan;
}
// Forward declare root types
namespace UniLabs::Time {
class UTimeSpanRange;
}
// Write type traits
MARK_REF_T(::UniLabs::Time::UTimeSpanRange*);
DEFINE_IL2CPP_CLASS(::UniLabs::Time::UTimeSpanRange*, "UniLabs.Time", "UTimeSpanRange");
// [JsonObject((Newtonsoft.Json.MemberSerialization)1)]
// Dependencies System.Object
namespace UniLabs::Time {
// Is value type: false
// CS Name: UniLabs.Time.UTimeSpanRange
class CORDL_TYPE UTimeSpanRange : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Duration)) ::System::TimeSpan  Duration;

 __declspec(property(get=get_End, put=set_End)) ::System::TimeSpan  End;

 __declspec(property(get=get_Start, put=set_Start)) ::System::TimeSpan  Start;

/// @brief Field _End, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__End, put=__cordl_internal_set__End)) ::UniLabs::Time::UTimeSpan*  _End;

/// @brief Field _Start, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Start, put=__cordl_internal_set__Start)) ::UniLabs::Time::UTimeSpan*  _Start;

/// @brief Method IsInRange, addr 0x5b6e7dc, size 0xc0, virtual false, abstract: false, final false
inline bool IsInRange(::System::TimeSpan  time) ;

/// @brief [JsonConstructor]
static inline ::UniLabs::Time::UTimeSpanRange* New_ctor() ;

static inline ::UniLabs::Time::UTimeSpanRange* New_ctor(::System::TimeSpan  start) ;

static inline ::UniLabs::Time::UTimeSpanRange* New_ctor(::System::TimeSpan  start, ::System::TimeSpan  end) ;

/// @brief Method OnEndChanged, addr 0x5b6e98c, size 0x40, virtual false, abstract: false, final false
inline void OnEndChanged() ;

/// @brief Method OnStartChanged, addr 0x5b6e948, size 0x44, virtual false, abstract: false, final false
inline void OnStartChanged() ;

constexpr ::UniLabs::Time::UTimeSpan* const& __cordl_internal_get__End() const;

constexpr ::UniLabs::Time::UTimeSpan*& __cordl_internal_get__End() ;

constexpr ::UniLabs::Time::UTimeSpan* const& __cordl_internal_get__Start() const;

constexpr ::UniLabs::Time::UTimeSpan*& __cordl_internal_get__Start() ;

constexpr void __cordl_internal_set__End(::UniLabs::Time::UTimeSpan*  value) ;

constexpr void __cordl_internal_set__Start(::UniLabs::Time::UTimeSpan*  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x5b6e89c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5b6e8a4, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  start) ;

/// @brief Method .ctor, addr 0x5b6e8f4, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  start, ::System::TimeSpan  end) ;

/// @brief Method get_Duration, addr 0x5b6e760, size 0x7c, virtual false, abstract: false, final false
inline ::System::TimeSpan get_Duration() ;

/// @brief Method get_End, addr 0x5b6e734, size 0x8, virtual false, abstract: false, final false
inline ::System::TimeSpan get_End() ;

/// @brief Method get_Start, addr 0x5b6e708, size 0x8, virtual false, abstract: false, final false
inline ::System::TimeSpan get_Start() ;

/// @brief Method set_End, addr 0x5b6e73c, size 0x24, virtual false, abstract: false, final false
inline void set_End(::System::TimeSpan  value) ;

/// @brief Method set_Start, addr 0x5b6e710, size 0x24, virtual false, abstract: false, final false
inline void set_Start(::System::TimeSpan  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UTimeSpanRange() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UTimeSpanRange", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UTimeSpanRange(UTimeSpanRange && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UTimeSpanRange", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UTimeSpanRange(UTimeSpanRange const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3858};

/// [JsonProperty("Start")]
/// [SerializeField]
/// @brief Field _Start, offset: 0x10, size: 0x8, def value: None
 ::UniLabs::Time::UTimeSpan*  ____Start;

/// [JsonProperty("End")]
/// [SerializeField]
/// @brief Field _End, offset: 0x18, size: 0x8, def value: None
 ::UniLabs::Time::UTimeSpan*  ____End;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UniLabs::Time::UTimeSpanRange, ____Start) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UniLabs::Time::UTimeSpanRange, ____End) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UniLabs::Time::UTimeSpanRange) == 0x20, "Size mismatch!");

} // namespace end def UniLabs::Time
