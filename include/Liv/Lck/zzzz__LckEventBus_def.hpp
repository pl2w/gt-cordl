#pragma once
// IWYU pragma private; include "Liv/Lck/LckEventBus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckEventBus)
namespace Liv::Lck {
class ILckEventBus;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Delegate;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Liv::Lck {
class LckEventBus;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckEventBus*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckEventBus*, "Liv.Lck", "LckEventBus");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckEventBus
class CORDL_TYPE LckEventBus : public ::System::Object {
public:
// Declarations
/// @brief Field _delegates, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__delegates, put=__cordl_internal_set__delegates)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>*  _delegates;

/// @brief Convert operator to "::Liv::Lck::ILckEventBus"
constexpr operator  ::Liv::Lck::ILckEventBus*() noexcept;

/// @brief Method AddListener, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void AddListener(::System::Action_1<T>*  listener) ;

/// @brief [Preserve]
static inline ::Liv::Lck::LckEventBus* New_ctor() ;

/// @brief Method RemoveListener, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void RemoveListener(::System::Action_1<T>*  listener) ;

/// @brief Method Trigger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void Trigger(T  eventData) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>* const& __cordl_internal_get__delegates() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>*& __cordl_internal_get__delegates() ;

constexpr void __cordl_internal_set__delegates(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9ce124c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Liv::Lck::ILckEventBus"
constexpr ::Liv::Lck::ILckEventBus* i___Liv__Lck__ILckEventBus() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEventBus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEventBus", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEventBus(LckEventBus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEventBus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEventBus(LckEventBus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24702};

/// @brief Field _delegates, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Delegate*>*  ____delegates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckEventBus, ____delegates) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckEventBus) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck
