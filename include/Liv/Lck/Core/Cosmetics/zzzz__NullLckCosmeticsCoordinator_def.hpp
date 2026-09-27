#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/NullLckCosmeticsCoordinator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NullLckCosmeticsCoordinator)
namespace Liv::Lck::Core::Cosmetics {
class ILckCosmeticsCoordinator;
}
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
class NullLckCosmeticsCoordinator;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator*, "Liv.Lck.Core.Cosmetics", "NullLckCosmeticsCoordinator");
// [Preserve]
// Dependencies System.Object
namespace Liv::Lck::Core::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Core.Cosmetics.NullLckCosmeticsCoordinator
class CORDL_TYPE NullLckCosmeticsCoordinator : public ::System::Object {
public:
// Declarations
/// @brief Field OnCosmeticAvailable, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCosmeticAvailable, put=__cordl_internal_set_OnCosmeticAvailable)) ::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  OnCosmeticAvailable;

/// @brief Convert operator to "::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator"
constexpr operator  ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*() noexcept;

/// @brief Method AnnouncePlayerPresenceForSessionAsync, addr 0x9d059f4, size 0x90, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* AnnouncePlayerPresenceForSessionAsync(::StringW  playerId, ::StringW  sessionId) ;

/// @brief Method GetUserCosmeticsForSessionAsync, addr 0x9d05964, size 0x90, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::Core::Result_1<bool>*>* GetUserCosmeticsForSessionAsync(::System::Collections::Generic::IEnumerable_1<::StringW>*  playerIds, ::StringW  sessionId) ;

/// @brief Method InitializeLocalCosmeticsAsync, addr 0x9d058dc, size 0x88, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* InitializeLocalCosmeticsAsync() ;

/// @brief [Preserve]
static inline ::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator* New_ctor() ;

constexpr ::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>* const& __cordl_internal_get_OnCosmeticAvailable() const;

constexpr ::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*& __cordl_internal_get_OnCosmeticAvailable() ;

constexpr void __cordl_internal_set_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d058d4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnCosmeticAvailable, addr 0x9d05774, size 0xb0, virtual true, abstract: false, final true
inline void add_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value) ;

/// @brief Convert to "::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator"
constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* i___Liv__Lck__Core__Cosmetics__ILckCosmeticsCoordinator() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnCosmeticAvailable, addr 0x9d05824, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnCosmeticAvailable(::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NullLckCosmeticsCoordinator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NullLckCosmeticsCoordinator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NullLckCosmeticsCoordinator(NullLckCosmeticsCoordinator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullLckCosmeticsCoordinator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullLckCosmeticsCoordinator(NullLckCosmeticsCoordinator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31955};

/// [CompilerGenerated]
/// @brief Field OnCosmeticAvailable, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo>*  ___OnCosmeticAvailable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator, ___OnCosmeticAvailable) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::Cosmetics::NullLckCosmeticsCoordinator) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::Core::Cosmetics
