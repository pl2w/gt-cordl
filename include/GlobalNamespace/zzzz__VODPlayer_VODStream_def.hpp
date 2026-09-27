#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer_VODStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamChannel_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VODPlayer_VODStream)
namespace GlobalNamespace {
struct VODStream_VODPlayer_VODStreamChannel;
}
namespace GlobalNamespace {
struct VODStream_VODPlayer_VODStreamType;
}
// Forward declare root types
namespace GlobalNamespace {
struct VODPlayer_VODStream;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VODPlayer_VODStream);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODPlayer_VODStream, "", "VODPlayer/VODStream");
// Dependencies VODPlayer::VODStream::VODStreamChannel, VODPlayer::VODStream::VODStreamType
namespace GlobalNamespace {
// Is value type: true
// CS Name: VODPlayer/VODStream
struct CORDL_TYPE VODPlayer_VODStream {
public:
// Declarations
using VODStreamChannel = ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel;

using VODStreamType = ::GlobalNamespace::VODStream_VODPlayer_VODStreamType;

 __declspec(property(get=get_displayTitle)) ::StringW  displayTitle;

/// @brief Method get_displayTitle, addr 0x5d049b0, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_displayTitle() ;

// Ctor Parameters []
// @brief default ctor
constexpr VODPlayer_VODStream() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "hideUpNext", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::VODStream_VODPlayer_VODStreamType", modifiers: "", def_value: None, comment: None }, CppParam { name: "duration", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ch", ty: "::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel", modifiers: "", def_value: None, comment: None }]
constexpr VODPlayer_VODStream(::StringW  name, bool  hideUpNext, ::StringW  id, ::StringW  url, ::GlobalNamespace::VODStream_VODPlayer_VODStreamType  type, int32_t  duration, ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{434};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field hideUpNext, offset: 0x8, size: 0x1, def value: None
 bool  hideUpNext;

/// @brief Field id, offset: 0x10, size: 0x8, def value: None
 ::StringW  id;

/// [Obsolete]
/// @brief Field url, offset: 0x18, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field type, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::VODStream_VODPlayer_VODStreamType  type;

/// @brief Field duration, offset: 0x24, size: 0x4, def value: None
 int32_t  duration;

/// @brief Field ch, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODPlayer_VODStream, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODStream, hideUpNext) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODStream, id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODStream, url) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODStream, type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODStream, duration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer_VODStream, ch) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODPlayer_VODStream) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
