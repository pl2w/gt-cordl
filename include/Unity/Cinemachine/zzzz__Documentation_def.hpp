#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Documentation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Documentation)
// Forward declare root types
namespace Unity::Cinemachine {
class Documentation;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::Documentation*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Documentation*, "Unity.Cinemachine", "Documentation");
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.Documentation
class CORDL_TYPE Documentation : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Documentation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Documentation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Documentation(Documentation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Documentation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Documentation(Documentation const& ) = delete;

/// @brief Field BaseURL offset 0xffffffff size 0x8
static constexpr ::ConstString  BaseURL{u"https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22275};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::Documentation) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
