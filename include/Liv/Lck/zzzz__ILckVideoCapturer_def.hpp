#pragma once
// IWYU pragma private; include "Liv/Lck/ILckVideoCapturer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckVideoCapturer)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck {
class ILckVideoCapturer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckVideoCapturer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckVideoCapturer*, "Liv.Lck", "ILckVideoCapturer");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckVideoCapturer
class CORDL_TYPE ILckVideoCapturer {
public:
// Declarations
 __declspec(property(get=get_ForceCaptureAllFrames, put=set_ForceCaptureAllFrames)) bool  ForceCaptureAllFrames;

 __declspec(property(get=get_IsCapturing)) bool  IsCapturing;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method HasCurrentFrameBeenCaptured, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool HasCurrentFrameBeenCaptured() ;

/// @brief Method StartCapturing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void StartCapturing() ;

/// @brief Method StopCapturing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void StopCapturing() ;

/// @brief Method get_ForceCaptureAllFrames, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ForceCaptureAllFrames() ;

/// @brief Method get_IsCapturing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsCapturing() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_ForceCaptureAllFrames, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ForceCaptureAllFrames(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ILckVideoCapturer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckVideoCapturer(ILckVideoCapturer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24764};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
