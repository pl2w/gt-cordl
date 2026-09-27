#pragma once
// IWYU pragma private; include "Liv/Lck/ILckEventBus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckEventBus)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Liv::Lck {
class ILckEventBus;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckEventBus*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckEventBus*, "Liv.Lck", "ILckEventBus");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckEventBus
class CORDL_TYPE ILckEventBus {
public:
// Declarations
/// @brief Method AddListener, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename T>
inline void AddListener(::System::Action_1<T>*  listener) ;

/// @brief Method RemoveListener, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename T>
inline void RemoveListener(::System::Action_1<T>*  listener) ;

/// @brief Method Trigger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename T>
inline void Trigger(T  eventData) ;

// Ctor Parameters [CppParam { name: "", ty: "ILckEventBus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckEventBus(ILckEventBus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24682};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
