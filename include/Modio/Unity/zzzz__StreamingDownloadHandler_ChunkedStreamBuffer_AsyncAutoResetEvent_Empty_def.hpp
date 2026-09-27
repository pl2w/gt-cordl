#pragma once
// IWYU pragma private; include "Modio/Unity/StreamingDownloadHandler_ChunkedStreamBuffer_AsyncAutoResetEvent_Empty.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(StreamingDownloadHandler_ChunkedStreamBuffer_AsyncAutoResetEvent_Empty)
// Forward declare root types
namespace GlobalNamespace {
struct AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty, "Modio.Unity", "StreamingDownloadHandler/ChunkedStreamBuffer/AsyncAutoResetEvent/Empty");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.StreamingDownloadHandler/ChunkedStreamBuffer/AsyncAutoResetEvent/Empty
#pragma pack(push, 0)
struct CORDL_TYPE AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32069};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AsyncAutoResetEvent_ChunkedStreamBuffer_StreamingDownloadHandler_Empty) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
