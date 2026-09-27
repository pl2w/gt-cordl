#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckCoreWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LckCoreWrapper)
namespace Liv::Lck::Core {
class ILckCore;
}
namespace Liv::Lck::Core {
template<typename T>
class Result_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Liv::Lck::Core {
class LckCoreWrapper;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::LckCoreWrapper*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCoreWrapper*, "Liv.Lck.Core", "LckCoreWrapper");
// [Preserve]
// Dependencies System.Object
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCoreWrapper
class CORDL_TYPE LckCoreWrapper : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Liv::Lck::Core::ILckCore"
constexpr operator  ::Liv::Lck::Core::ILckCore*() noexcept;

/// @brief Method Liv.Lck.Core.ILckCore.CheckLoginCompletedAsync, addr 0x9d017c4, size 0x4c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv_Lck_Core_ILckCore_CheckLoginCompletedAsync() ;

/// @brief Method Liv.Lck.Core.ILckCore.GetRemainingBackoffTimeSeconds, addr 0x9d018f4, size 0x4c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<float_t>*>* Liv_Lck_Core_ILckCore_GetRemainingBackoffTimeSeconds() ;

/// @brief Method Liv.Lck.Core.ILckCore.HasUserConfiguredStreaming, addr 0x9d01810, size 0x4c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv_Lck_Core_ILckCore_HasUserConfiguredStreaming() ;

/// @brief Method Liv.Lck.Core.ILckCore.IsUserSubscribed, addr 0x9d018a8, size 0x4c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* Liv_Lck_Core_ILckCore_IsUserSubscribed() ;

/// @brief Method Liv.Lck.Core.ILckCore.StartLoginAttemptAsync, addr 0x9d0185c, size 0x4c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<::StringW>*>* Liv_Lck_Core_ILckCore_StartLoginAttemptAsync() ;

/// @brief [Preserve]
static inline ::Liv::Lck::Core::LckCoreWrapper* New_ctor() ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d017bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::Core::ILckCore"
constexpr ::Liv::Lck::Core::ILckCore* i___Liv__Lck__Core__ILckCore() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreWrapper(LckCoreWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreWrapper(LckCoreWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31933};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::LckCoreWrapper) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Core
