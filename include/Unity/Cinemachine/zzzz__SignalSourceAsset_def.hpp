#pragma once
// IWYU pragma private; include "Unity/Cinemachine/SignalSourceAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SignalSourceAsset)
namespace Unity::Cinemachine {
class ISignalSource6D;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class SignalSourceAsset;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::SignalSourceAsset*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::SignalSourceAsset*, "Unity.Cinemachine", "SignalSourceAsset");
// Dependencies UnityEngine.ScriptableObject
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.SignalSourceAsset
class CORDL_TYPE SignalSourceAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_SignalDuration)) float_t  SignalDuration;

/// @brief Convert operator to "::Unity::Cinemachine::ISignalSource6D"
constexpr operator  ::Unity::Cinemachine::ISignalSource6D*() noexcept;

/// @brief Method GetSignal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetSignal(float_t  timeSinceSignalStart, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot) ;

static inline ::Unity::Cinemachine::SignalSourceAsset* New_ctor() ;

/// @brief Method .ctor, addr 0xaeb9174, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SignalDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_SignalDuration() ;

/// @brief Convert to "::Unity::Cinemachine::ISignalSource6D"
constexpr ::Unity::Cinemachine::ISignalSource6D* i___Unity__Cinemachine__ISignalSource6D() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignalSourceAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignalSourceAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalSourceAsset(SignalSourceAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalSourceAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalSourceAsset(SignalSourceAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22359};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::SignalSourceAsset) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
