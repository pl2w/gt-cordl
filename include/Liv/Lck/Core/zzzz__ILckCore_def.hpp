#pragma once
// IWYU pragma private; include "Liv/Lck/Core/ILckCore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ILckCore)
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
class ILckCore;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::ILckCore*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::ILckCore*, "Liv.Lck.Core", "ILckCore");
// Dependencies 
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.ILckCore
class CORDL_TYPE ILckCore {
public:
// Declarations
/// @brief Method CheckLoginCompletedAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* CheckLoginCompletedAsync() ;

/// @brief Method GetRemainingBackoffTimeSeconds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<float_t>*>* GetRemainingBackoffTimeSeconds() ;

/// @brief Method HasUserConfiguredStreaming, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* HasUserConfiguredStreaming() ;

/// @brief Method IsUserSubscribed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* IsUserSubscribed() ;

/// @brief Method StartLoginAttemptAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<::StringW>*>* StartLoginAttemptAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "ILckCore", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckCore(ILckCore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31903};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Core
