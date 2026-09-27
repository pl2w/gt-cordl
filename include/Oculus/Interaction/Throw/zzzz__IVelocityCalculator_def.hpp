#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/IVelocityCalculator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IVelocityCalculator)
namespace Oculus::Interaction::Throw {
class IThrowVelocityCalculator;
}
namespace Oculus::Interaction::Throw {
struct ReleaseVelocityInformation;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Oculus::Interaction::Throw {
class IVelocityCalculator;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Throw::IVelocityCalculator*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Throw::IVelocityCalculator*, "Oculus.Interaction.Throw", "IVelocityCalculator");
// [Obsolete("Use IThrowVelocityCalculator directly instead")]
// Dependencies 
namespace Oculus::Interaction::Throw {
// Is value type: false
// CS Name: Oculus.Interaction.Throw.IVelocityCalculator
class CORDL_TYPE IVelocityCalculator {
public:
// Declarations
 __declspec(property(get=get_UpdateFrequency)) float_t  UpdateFrequency;

/// @brief Convert operator to "::Oculus::Interaction::Throw::IThrowVelocityCalculator"
constexpr operator  ::Oculus::Interaction::Throw::IThrowVelocityCalculator*() noexcept;

/// @brief Method LastThrowVelocities, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>* LastThrowVelocities() ;

/// @brief Method SetUpdateFrequency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetUpdateFrequency(float_t  frequency) ;

/// [CompilerGenerated]
/// @brief Method add_WhenNewSampleAvailable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenNewSampleAvailable(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenThrowVelocitiesChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_WhenThrowVelocitiesChanged(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  value) ;

/// @brief Method get_UpdateFrequency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_UpdateFrequency() ;

/// @brief Convert to "::Oculus::Interaction::Throw::IThrowVelocityCalculator"
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* i___Oculus__Interaction__Throw__IThrowVelocityCalculator() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenNewSampleAvailable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenNewSampleAvailable(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenThrowVelocitiesChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_WhenThrowVelocitiesChanged(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IVelocityCalculator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVelocityCalculator(IVelocityCalculator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16074};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Throw
