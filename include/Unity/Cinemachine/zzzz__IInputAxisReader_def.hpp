#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IInputAxisReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IInputAxisReader)
namespace GlobalNamespace {
struct AxisDescriptor_IInputAxisOwner_Hints;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Unity::Cinemachine {
class IInputAxisReader;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::IInputAxisReader*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::IInputAxisReader*, "Unity.Cinemachine", "IInputAxisReader");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.IInputAxisReader
class CORDL_TYPE IInputAxisReader {
public:
// Declarations
/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetValue(::UnityEngine::Object*  context, ::GlobalNamespace::AxisDescriptor_IInputAxisOwner_Hints  hint) ;

// Ctor Parameters [CppParam { name: "", ty: "IInputAxisReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IInputAxisReader(IInputAxisReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22329};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Cinemachine
