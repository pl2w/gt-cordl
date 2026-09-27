#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/ILckCosmeticsCoordinator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ILckCosmeticsCoordinator)
namespace Liv::Lck::Core::Cosmetics {
struct LckAvailableCosmeticInfo;
}
namespace Liv::Lck::Core {
template<typename T>
class Result_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Liv::Lck::Core::Cosmetics {
class ILckCosmeticsCoordinator;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*, "Liv.Lck.Core.Cosmetics", "ILckCosmeticsCoordinator");
// Dependencies 
namespace Liv::Lck::Core::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Core.Cosmetics.ILckCosmeticsCoordinator
class CORDL_TYPE ILckCosmeticsCoordinator {
public:
// Declarations
/// @brief Method AnnouncePlayerPresenceForSessionAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* AnnouncePlayerPresenceForSessionAsync(::StringW  playerId, ::StringW  sessionId) ;

/// @brief Method GetUserCosmeticsForSessionAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* GetUserCosmeticsForSessionAsync(::System::Collections::Generic::IEnumerable_1<::StringW>*  playerIds, ::StringW  sessionId) ;

/// @brief Method InitializeLocalCosmeticsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task* InitializeLocalCosmeticsAsync() ;

/// [CompilerGenerated]
/// @brief Method add_OnCosmeticAvailable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnCosmeticAvailable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ILckCosmeticsCoordinator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckCosmeticsCoordinator(ILckCosmeticsCoordinator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31943};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Core::Cosmetics
