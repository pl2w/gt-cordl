#pragma once
// IWYU pragma private; include "Modio/Users/ModRepository.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModRepository)
namespace Modio::Mods {
struct ModChangeType;
}
namespace Modio::Mods {
struct ModId;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Users {
class ModRepository___c__DisplayClass19_0;
}
namespace Modio::Users {
class ModRepository___c__DisplayClass20_0;
}
namespace Modio::Users {
class ModRepository___c__DisplayClass21_0;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Modio::Users {
class ModRepository;
}
namespace Modio::Users {
class ModRepository___c__DisplayClass19_0;
}
namespace Modio::Users {
class ModRepository___c__DisplayClass20_0;
}
namespace Modio::Users {
class ModRepository___c__DisplayClass21_0;
}
// Write type traits
MARK_REF_T(::Modio::Users::ModRepository*);
MARK_REF_T(::Modio::Users::ModRepository___c__DisplayClass19_0*);
MARK_REF_T(::Modio::Users::ModRepository___c__DisplayClass20_0*);
MARK_REF_T(::Modio::Users::ModRepository___c__DisplayClass21_0*);
DEFINE_IL2CPP_CLASS(::Modio::Users::ModRepository*, "Modio.Users", "ModRepository");
DEFINE_IL2CPP_CLASS(::Modio::Users::ModRepository___c__DisplayClass19_0*, "Modio.Users", "ModRepository/<>c__DisplayClass19_0");
DEFINE_IL2CPP_CLASS(::Modio::Users::ModRepository___c__DisplayClass20_0*, "Modio.Users", "ModRepository/<>c__DisplayClass20_0");
DEFINE_IL2CPP_CLASS(::Modio::Users::ModRepository___c__DisplayClass21_0*, "Modio.Users", "ModRepository/<>c__DisplayClass21_0");
// Dependencies System.Object
namespace Modio::Users {
// Is value type: false
// CS Name: Modio.Users.ModRepository
class CORDL_TYPE ModRepository : public ::System::Object {
public:
// Declarations
using __c__DisplayClass19_0 = ::Modio::Users::ModRepository___c__DisplayClass19_0;

using __c__DisplayClass20_0 = ::Modio::Users::ModRepository___c__DisplayClass20_0;

using __c__DisplayClass21_0 = ::Modio::Users::ModRepository___c__DisplayClass21_0;

 __declspec(property(get=get_HasGotSubscriptions, put=set_HasGotSubscriptions)) bool  HasGotSubscriptions;

/// @brief Field OnContentsChanged, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnContentsChanged, put=__cordl_internal_set_OnContentsChanged)) ::System::Action*  OnContentsChanged;

/// @brief Field <HasGotSubscriptions>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasGotSubscriptions_k__BackingField, put=__cordl_internal_set__HasGotSubscriptions_k__BackingField)) bool  _HasGotSubscriptions_k__BackingField;

/// @brief Field _created, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__created, put=__cordl_internal_set__created)) ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  _created;

/// @brief Field _disabled, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__disabled, put=__cordl_internal_set__disabled)) ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  _disabled;

/// @brief Field _purchased, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__purchased, put=__cordl_internal_set__purchased)) ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  _purchased;

/// @brief Field _subscribed, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscribed, put=__cordl_internal_set__subscribed)) ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  _subscribed;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xa01d1f8, size 0x174, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetCreatedMods, addr 0xa01cb84, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>* GetCreatedMods() ;

/// @brief Method GetDisabled, addr 0xa01cb9c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>* GetDisabled() ;

/// @brief Method GetPurchased, addr 0xa01cb94, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>* GetPurchased() ;

/// @brief Method GetSubscribed, addr 0xa01cb8c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>* GetSubscribed() ;

/// @brief Method IsDisabled, addr 0xa01d040, size 0xd4, virtual false, abstract: false, final false
inline bool IsDisabled(::Modio::Mods::ModId  modId) ;

/// @brief Method IsPurchased, addr 0xa01d11c, size 0xd4, virtual false, abstract: false, final false
inline bool IsPurchased(::Modio::Mods::ModId  modId) ;

/// @brief Method IsSubscribed, addr 0xa00afac, size 0xd4, virtual false, abstract: false, final false
inline bool IsSubscribed(::Modio::Mods::ModId  modId) ;

static inline ::Modio::Users::ModRepository* New_ctor() ;

/// @brief Method OnModEnabledChange, addr 0xa01cec8, size 0xb8, virtual false, abstract: false, final false
inline void OnModEnabledChange(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  changeType) ;

/// @brief Method OnModPurchasedChange, addr 0xa01cf80, size 0xb8, virtual false, abstract: false, final false
inline void OnModPurchasedChange(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  changeType) ;

/// @brief Method OnModSubscriptionChange, addr 0xa01cde4, size 0xe4, virtual false, abstract: false, final false
inline void OnModSubscriptionChange(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  changeType) ;

constexpr ::System::Action* const& __cordl_internal_get_OnContentsChanged() const;

constexpr ::System::Action*& __cordl_internal_get_OnContentsChanged() ;

constexpr bool const& __cordl_internal_get__HasGotSubscriptions_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasGotSubscriptions_k__BackingField() ;

constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* const& __cordl_internal_get__created() const;

constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*& __cordl_internal_get__created() ;

constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* const& __cordl_internal_get__disabled() const;

constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*& __cordl_internal_get__disabled() ;

constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* const& __cordl_internal_get__purchased() const;

constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*& __cordl_internal_get__purchased() ;

constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* const& __cordl_internal_get__subscribed() const;

constexpr ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*& __cordl_internal_get__subscribed() ;

constexpr void __cordl_internal_set_OnContentsChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set__HasGotSubscriptions_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__created(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set__disabled(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set__purchased(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set__subscribed(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value) ;

/// @brief Method .ctor, addr 0xa01cba4, size 0x240, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnContentsChanged, addr 0xa01ca4c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnContentsChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method get_HasGotSubscriptions, addr 0xa01ca3c, size 0x8, virtual false, abstract: false, final false
inline bool get_HasGotSubscriptions() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnContentsChanged, addr 0xa01cae8, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnContentsChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_HasGotSubscriptions, addr 0xa01ca44, size 0x8, virtual false, abstract: false, final false
inline void set_HasGotSubscriptions(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModRepository() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModRepository", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModRepository(ModRepository && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModRepository", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModRepository(ModRepository const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17528};

/// [CompilerGenerated]
/// @brief Field <HasGotSubscriptions>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____HasGotSubscriptions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnContentsChanged, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___OnContentsChanged;

/// @brief Field _created, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  ____created;

/// @brief Field _subscribed, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  ____subscribed;

/// @brief Field _purchased, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  ____purchased;

/// @brief Field _disabled, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  ____disabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Users::ModRepository, ____HasGotSubscriptions_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::ModRepository, ___OnContentsChanged) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::ModRepository, ____created) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::ModRepository, ____subscribed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::ModRepository, ____purchased) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::ModRepository, ____disabled) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::Users::ModRepository) == 0x40, "Size mismatch!");

} // namespace end def Modio::Users
// [CompilerGenerated]
// Dependencies Modio.Mods.ModId, System.Object
namespace Modio::Users {
// Is value type: false
// CS Name: Modio.Users.ModRepository/<>c__DisplayClass21_0
class CORDL_TYPE ModRepository___c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field modId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_modId, put=__cordl_internal_set_modId)) ::Modio::Mods::ModId  modId;

static inline ::Modio::Users::ModRepository___c__DisplayClass21_0* New_ctor() ;

/// @brief Method <IsPurchased>b__0, addr 0xa01d3ac, size 0x20, virtual false, abstract: false, final false
inline bool _IsPurchased_b__0(::Modio::Mods::Mod*  mod) ;

constexpr ::Modio::Mods::ModId const& __cordl_internal_get_modId() const;

constexpr ::Modio::Mods::ModId& __cordl_internal_get_modId() ;

constexpr void __cordl_internal_set_modId(::Modio::Mods::ModId  value) ;

/// @brief Method .ctor, addr 0xa01d1f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModRepository___c__DisplayClass21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModRepository___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModRepository___c__DisplayClass21_0(ModRepository___c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModRepository___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModRepository___c__DisplayClass21_0(ModRepository___c__DisplayClass21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17527};

/// @brief Field modId, offset: 0x10, size: 0x8, def value: None
 ::Modio::Mods::ModId  ___modId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Users::ModRepository___c__DisplayClass21_0, ___modId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Users::ModRepository___c__DisplayClass21_0) == 0x18, "Size mismatch!");

} // namespace end def Modio::Users
// [CompilerGenerated]
// Dependencies Modio.Mods.ModId, System.Object
namespace Modio::Users {
// Is value type: false
// CS Name: Modio.Users.ModRepository/<>c__DisplayClass20_0
class CORDL_TYPE ModRepository___c__DisplayClass20_0 : public ::System::Object {
public:
// Declarations
/// @brief Field modId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_modId, put=__cordl_internal_set_modId)) ::Modio::Mods::ModId  modId;

static inline ::Modio::Users::ModRepository___c__DisplayClass20_0* New_ctor() ;

/// @brief Method <IsDisabled>b__0, addr 0xa01d38c, size 0x20, virtual false, abstract: false, final false
inline bool _IsDisabled_b__0(::Modio::Mods::Mod*  mod) ;

constexpr ::Modio::Mods::ModId const& __cordl_internal_get_modId() const;

constexpr ::Modio::Mods::ModId& __cordl_internal_get_modId() ;

constexpr void __cordl_internal_set_modId(::Modio::Mods::ModId  value) ;

/// @brief Method .ctor, addr 0xa01d114, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModRepository___c__DisplayClass20_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModRepository___c__DisplayClass20_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModRepository___c__DisplayClass20_0(ModRepository___c__DisplayClass20_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModRepository___c__DisplayClass20_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModRepository___c__DisplayClass20_0(ModRepository___c__DisplayClass20_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17526};

/// @brief Field modId, offset: 0x10, size: 0x8, def value: None
 ::Modio::Mods::ModId  ___modId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Users::ModRepository___c__DisplayClass20_0, ___modId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Users::ModRepository___c__DisplayClass20_0) == 0x18, "Size mismatch!");

} // namespace end def Modio::Users
// [CompilerGenerated]
// Dependencies Modio.Mods.ModId, System.Object
namespace Modio::Users {
// Is value type: false
// CS Name: Modio.Users.ModRepository/<>c__DisplayClass19_0
class CORDL_TYPE ModRepository___c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief Field modId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_modId, put=__cordl_internal_set_modId)) ::Modio::Mods::ModId  modId;

static inline ::Modio::Users::ModRepository___c__DisplayClass19_0* New_ctor() ;

/// @brief Method <IsSubscribed>b__0, addr 0xa01d36c, size 0x20, virtual false, abstract: false, final false
inline bool _IsSubscribed_b__0(::Modio::Mods::Mod*  mod) ;

constexpr ::Modio::Mods::ModId const& __cordl_internal_get_modId() const;

constexpr ::Modio::Mods::ModId& __cordl_internal_get_modId() ;

constexpr void __cordl_internal_set_modId(::Modio::Mods::ModId  value) ;

/// @brief Method .ctor, addr 0xa01d038, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModRepository___c__DisplayClass19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModRepository___c__DisplayClass19_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModRepository___c__DisplayClass19_0(ModRepository___c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModRepository___c__DisplayClass19_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModRepository___c__DisplayClass19_0(ModRepository___c__DisplayClass19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17525};

/// @brief Field modId, offset: 0x10, size: 0x8, def value: None
 ::Modio::Mods::ModId  ___modId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Users::ModRepository___c__DisplayClass19_0, ___modId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Users::ModRepository___c__DisplayClass19_0) == 0x18, "Size mismatch!");

} // namespace end def Modio::Users
