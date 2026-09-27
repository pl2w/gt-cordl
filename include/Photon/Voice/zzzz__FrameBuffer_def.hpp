#pragma once
// IWYU pragma private; include "Photon/Voice/FrameBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__FrameFlags_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameBuffer)
namespace Photon::Voice {
struct FrameFlags;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Photon::Voice {
struct FrameBuffer;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::FrameBuffer);
DEFINE_IL2CPP_CLASS(::Photon::Voice::FrameBuffer, "Photon.Voice", "FrameBuffer");
// Dependencies Photon.Voice.FrameFlags, System.IntPtr, System.Runtime.InteropServices.GCHandle
namespace Photon::Voice {
// Is value type: true
// CS Name: Photon.Voice.FrameBuffer
struct CORDL_TYPE FrameBuffer {
public:
// Declarations
 __declspec(property(get=get_Array)) ::ArrayW<uint8_t>  Array;

 __declspec(property(get=get_Flags)) ::Photon::Voice::FrameFlags  Flags;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_Offset)) int32_t  Offset;

 __declspec(property(get=get_Ptr)) ::System::IntPtr  Ptr;

/// @brief Field statDisposerCreated, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_statDisposerCreated, put=setStaticF_statDisposerCreated)) int32_t  statDisposerCreated;

/// @brief Field statDisposerDisposed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_statDisposerDisposed, put=setStaticF_statDisposerDisposed)) int32_t  statDisposerDisposed;

/// @brief Field statPinned, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_statPinned, put=setStaticF_statPinned)) int32_t  statPinned;

/// @brief Field statUnpinned, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_statUnpinned, put=setStaticF_statUnpinned)) int32_t  statUnpinned;

/// @brief Method Dispose, addr 0xa746608, size 0x10c, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Release, addr 0xa7465ec, size 0x1c, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method Retain, addr 0xa7465dc, size 0x10, virtual false, abstract: false, final false
inline void Retain() ;

/// @brief Method .ctor, addr 0xa746518, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  array, ::Photon::Voice::FrameFlags  flags) ;

/// @brief Method .ctor, addr 0xa746454, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  array, int32_t  offset, int32_t  count, ::Photon::Voice::FrameFlags  flags, ::System::IDisposable*  disposer) ;

static inline int32_t getStaticF_statDisposerCreated() ;

static inline int32_t getStaticF_statDisposerDisposed() ;

static inline int32_t getStaticF_statPinned() ;

static inline int32_t getStaticF_statUnpinned() ;

/// @brief Method get_Array, addr 0xa746714, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Array() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Flags, addr 0xa74672c, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::FrameFlags get_Flags() ;

/// @brief Method get_Length, addr 0xa74671c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_Offset, addr 0xa746724, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Offset() ;

/// @brief Method get_Ptr, addr 0xa744b64, size 0x9c, virtual false, abstract: false, final false
inline ::System::IntPtr get_Ptr() ;

static inline void setStaticF_statDisposerCreated(int32_t  value) ;

static inline void setStaticF_statDisposerDisposed(int32_t  value) ;

static inline void setStaticF_statPinned(int32_t  value) ;

static inline void setStaticF_statUnpinned(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FrameBuffer() ;

// Ctor Parameters [CppParam { name: "array", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "disposer", ty: "::System::IDisposable*", modifiers: "", def_value: None, comment: None }, CppParam { name: "disposed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "refCnt", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "gcHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "ptr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "pinned", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Flags_k__BackingField", ty: "::Photon::Voice::FrameFlags", modifiers: "", def_value: None, comment: None }]
constexpr FrameBuffer(::ArrayW<uint8_t>  array, int32_t  offset, int32_t  count, ::System::IDisposable*  disposer, bool  disposed, int32_t  refCnt, ::System::Runtime::InteropServices::GCHandle  gcHandle, ::System::IntPtr  ptr, bool  pinned, ::Photon::Voice::FrameFlags  _Flags_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28409};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field array, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  array;

/// @brief Field offset, offset: 0x8, size: 0x4, def value: None
 int32_t  offset;

/// @brief Field count, offset: 0xc, size: 0x4, def value: None
 int32_t  count;

/// @brief Field disposer, offset: 0x10, size: 0x8, def value: None
 ::System::IDisposable*  disposer;

/// @brief Field disposed, offset: 0x18, size: 0x1, def value: None
 bool  disposed;

/// @brief Field refCnt, offset: 0x1c, size: 0x4, def value: None
 int32_t  refCnt;

/// @brief Field gcHandle, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::InteropServices::GCHandle  gcHandle;

/// @brief Field ptr, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  ptr;

/// @brief Field pinned, offset: 0x30, size: 0x1, def value: None
 bool  pinned;

/// [CompilerGenerated]
/// @brief Field <Flags>k__BackingField, offset: 0x31, size: 0x1, def value: None
 ::Photon::Voice::FrameFlags  _Flags_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::FrameBuffer, array) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::FrameBuffer, offset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::FrameBuffer, count) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::FrameBuffer, disposer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::FrameBuffer, disposed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::FrameBuffer, refCnt) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::FrameBuffer, gcHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::FrameBuffer, ptr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::FrameBuffer, pinned) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::FrameBuffer, _Flags_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::FrameBuffer) == 0x38, "Size mismatch!");

} // namespace end def Photon::Voice
