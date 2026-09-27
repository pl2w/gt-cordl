#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ISignalSource6D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ISignalSource6D)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class ISignalSource6D;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ISignalSource6D*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ISignalSource6D*, "Unity.Cinemachine", "ISignalSource6D");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ISignalSource6D
class CORDL_TYPE ISignalSource6D {
public:
// Declarations
 __declspec(property(get=get_SignalDuration)) float_t  SignalDuration;

/// @brief Method GetSignal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetSignal(float_t  timeSinceSignalStart, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

/// @brief Method get_SignalDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_SignalDuration() ;

// Ctor Parameters [CppParam { name: "", ty: "ISignalSource6D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISignalSource6D(ISignalSource6D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22358};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
