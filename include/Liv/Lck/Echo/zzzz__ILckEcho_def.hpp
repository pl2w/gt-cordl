#pragma once
// IWYU pragma private; include "Liv/Lck/Echo/ILckEcho.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILckEcho)
namespace Liv::Lck {
class LckResult;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Liv::Lck::Echo {
class ILckEcho;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Echo::ILckEcho*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Echo::ILckEcho*, "Liv.Lck.Echo", "ILckEcho");
// Dependencies 
namespace Liv::Lck::Echo {
// Is value type: false
// CS Name: Liv.Lck.Echo.ILckEcho
class CORDL_TYPE ILckEcho {
public:
// Declarations
 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

 __declspec(property(get=get_IsSaving)) bool  IsSaving;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method GetBufferDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::TimeSpan GetBufferDuration() ;

/// @brief Method GetMaxBufferDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::TimeSpan GetMaxBufferDuration() ;

/// @brief Method SetEnabledAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* SetEnabledAsync(bool  enabled) ;

/// @brief Method TriggerSave, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* TriggerSave() ;

/// @brief Method get_IsEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsEnabled() ;

/// @brief Method get_IsSaving, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsSaving() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ILckEcho", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckEcho(ILckEcho const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24895};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::Echo
