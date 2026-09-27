#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer_VODHourlyStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VODPlayer_VODHourlyStream)
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct VODPlayer_VODHourlyStream;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VODPlayer_VODHourlyStream);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODPlayer_VODHourlyStream, "", "VODPlayer/VODHourlyStream");
// Dependencies System.DateTime, VODPlayer::VODStream
namespace GlobalNamespace {
// Is value type: true
// CS Name: VODPlayer/VODHourlyStream
struct CORDL_TYPE VODPlayer_VODHourlyStream {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::VODPlayer_VODHourlyStream>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::VODPlayer_VODHourlyStream>*() ;

/// @brief Method ClampedDateTime, addr 0x5d04a88, size 0xac, virtual false, abstract: false, final false
inline ::System::DateTime ClampedDateTime(::System::DateTime  dateTime) ;

/// @brief Method CompareTo, addr 0x5d049d0, size 0x10, virtual true, abstract: false, final true
inline int32_t CompareTo(::GlobalNamespace::VODPlayer_VODHourlyStream  other) ;

/// @brief Method IsDateInRange, addr 0x5d049e0, size 0xa8, virtual false, abstract: false, final false
inline bool IsDateInRange(::System::DateTime  serverTime) ;

/// @brief Method ValidateDate, addr 0x5d04790, size 0x220, virtual false, abstract: false, final false
inline void ValidateDate() ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::VODPlayer_VODHourlyStream>"
constexpr ::System::IComparable_1<::GlobalNamespace::VODPlayer_VODHourlyStream>* i___System__IComparable_1___GlobalNamespace__VODPlayer_VODHourlyStream_() ;

// Ctor Parameters []
// @brief default ctor
constexpr VODPlayer_VODHourlyStream() ;

// Ctor Parameters [CppParam { name: "stream", ty: "::GlobalNamespace::VODPlayer_VODStream", modifiers: "", def_value: None, comment: None }, CppParam { name: "minute", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "repeats", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "startDateTime", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "startDT", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }, CppParam { name: "endDateTime", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "endDT", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }]
constexpr VODPlayer_VODHourlyStream(::GlobalNamespace::VODPlayer_VODStream  stream, int32_t  minute, ::ArrayW<int32_t>  repeats, ::StringW  startDateTime, ::System::DateTime  startDT, ::StringW  endDateTime, ::System::DateTime  endDT) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field stream, offset: 0x0, size: 0x30, def value: None
 ::GlobalNamespace::VODPlayer_VODStream  stream;

/// [Range(0, 59)]
/// @brief Field minute, offset: 0x30, size: 0x4, def value: None
 int32_t  minute;

/// [Range(0, 59)]
/// @brief Field repeats, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t>  repeats;

/// @brief Field startDateTime, offset: 0x40, size: 0x8, def value: None
 ::StringW  startDateTime;

/// @brief Field startDT, offset: 0x48, size: 0x8, def value: None
 ::System::DateTime  startDT;

/// @brief Field endDateTime, offset: 0x50, size: 0x8, def value: None
 ::StringW  endDateTime;

/// @brief Field endDT, offset: 0x58, size: 0x8, def value: None
 ::System::DateTime  endDT;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODPlayer_VODHourlyStream, stream) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODHourlyStream, minute) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODHourlyStream, repeats) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODHourlyStream, startDateTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODHourlyStream, startDT) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODHourlyStream, endDateTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODHourlyStream, endDT) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODPlayer_VODHourlyStream) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
