#pragma once
// IWYU pragma private; include "Liv/Lck/ILckStorageWatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ILckStorageWatcher)
namespace Liv::Lck {
struct CameraTrackDescriptor;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck {
class ILckStorageWatcher;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckStorageWatcher*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckStorageWatcher*, "Liv.Lck", "ILckStorageWatcher");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckStorageWatcher
class CORDL_TYPE ILckStorageWatcher {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ClearRecordingContext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearRecordingContext() ;

/// @brief Method HasEnoughFreeStorage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool HasEnoughFreeStorage() ;

/// @brief Method SetRecordingContext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetRecordingContext(::Liv::Lck::CameraTrackDescriptor  descriptor, ::System::Func_1<float_t>*  getDurationSeconds) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ILckStorageWatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckStorageWatcher(ILckStorageWatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24686};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
