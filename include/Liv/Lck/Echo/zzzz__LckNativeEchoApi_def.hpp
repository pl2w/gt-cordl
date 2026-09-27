#pragma once
// IWYU pragma private; include "Liv/Lck/Echo/LckNativeEchoApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckNativeEchoApi)
namespace Liv::Lck::Echo {
class LckNativeEchoApi_EchoCompletionCallback;
}
namespace Liv::Lck::Recorder {
struct MuxerConfig;
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
namespace Liv::Lck::Echo {
class LckNativeEchoApi;
}
namespace Liv::Lck::Echo {
class LckNativeEchoApi_EchoCompletionCallback;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Echo::LckNativeEchoApi*);
MARK_REF_T(::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Echo::LckNativeEchoApi*, "Liv.Lck.Echo", "LckNativeEchoApi");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*, "Liv.Lck.Echo", "LckNativeEchoApi/EchoCompletionCallback");
// Dependencies System.Object
namespace Liv::Lck::Echo {
// Is value type: false
// CS Name: Liv.Lck.Echo.LckNativeEchoApi
class CORDL_TYPE LckNativeEchoApi : public ::System::Object {
public:
// Declarations
using EchoCompletionCallback = ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback;

/// @brief Method ClearEchoBuffer, addr 0x9d4b41c, size 0x7c, virtual false, abstract: false, final false
static inline void ClearEchoBuffer(::System::IntPtr  echoBufferContext) ;

/// @brief Method CreateEchoDiskBuffer, addr 0x9d4aea0, size 0x94, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateEchoDiskBuffer(::StringW  storageDir) ;

/// @brief Method CreateEchoMemoryBuffer, addr 0x9d4ae3c, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateEchoMemoryBuffer() ;

/// @brief Method DestroyEchoBuffer, addr 0x9d4af34, size 0x7c, virtual false, abstract: false, final false
static inline void DestroyEchoBuffer(::System::IntPtr  echoBufferContext) ;

/// @brief Method GetEchoBufferDataSizeBytes, addr 0x9d4b3a0, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t GetEchoBufferDataSizeBytes(::System::IntPtr  echoBufferContext) ;

/// @brief Method GetEchoBufferDurationUs, addr 0x9d4b324, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t GetEchoBufferDurationUs(::System::IntPtr  echoBufferContext) ;

/// @brief Method GetEchoBufferMaxDuration, addr 0x9d4b498, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t GetEchoBufferMaxDuration(::System::IntPtr  echoBufferContext) ;

/// @brief Method GetEchoCallbackFunction, addr 0x9d4b234, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr GetEchoCallbackFunction() ;

/// @brief Method IsEchoBufferEnabled, addr 0x9d4b034, size 0x84, virtual false, abstract: false, final false
static inline bool IsEchoBufferEnabled(::System::IntPtr  echoBufferContext) ;

/// @brief Method SetEchoBufferEnabled, addr 0x9d4afb0, size 0x84, virtual false, abstract: false, final false
static inline void SetEchoBufferEnabled(::System::IntPtr  echoBufferContext, bool  enabled) ;

/// @brief Method SetEchoCompletionCallback, addr 0x9d4b298, size 0x8c, virtual false, abstract: false, final false
static inline void SetEchoCompletionCallback(::System::IntPtr  echoBufferContext, ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback*  callback) ;

/// @brief Method SetEchoMuxerConfig, addr 0x9d4b0b8, size 0xd8, virtual false, abstract: false, final false
static inline void SetEchoMuxerConfig(::System::IntPtr  echoBufferContext, ::by_ref<::Liv::Lck::Recorder::MuxerConfig>  config) ;

/// @brief Method TriggerEchoSave, addr 0x9d4b190, size 0xa4, virtual false, abstract: false, final false
static inline bool TriggerEchoSave(::System::IntPtr  echoBufferContext, ::StringW  outputPath) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeEchoApi() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckNativeEchoApi", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckNativeEchoApi(LckNativeEchoApi && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckNativeEchoApi", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckNativeEchoApi(LckNativeEchoApi const& ) = delete;

/// @brief Field EncodingLib offset 0xffffffff size 0x8
static constexpr ::ConstString  EncodingLib{u"lck_rs"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24904};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Echo::LckNativeEchoApi) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Echo
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Liv::Lck::Echo {
// Is value type: false
// CS Name: Liv.Lck.Echo.LckNativeEchoApi/EchoCompletionCallback
class CORDL_TYPE LckNativeEchoApi_EchoCompletionCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d4b5c8, size 0x70, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  status, ::StringW  outputPath, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d4b638, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d4b5b4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(uint32_t  status, ::StringW  outputPath) ;

static inline ::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d4b514, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckNativeEchoApi_EchoCompletionCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckNativeEchoApi_EchoCompletionCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckNativeEchoApi_EchoCompletionCallback(LckNativeEchoApi_EchoCompletionCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckNativeEchoApi_EchoCompletionCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckNativeEchoApi_EchoCompletionCallback(LckNativeEchoApi_EchoCompletionCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24903};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Echo::LckNativeEchoApi_EchoCompletionCallback) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::Echo
