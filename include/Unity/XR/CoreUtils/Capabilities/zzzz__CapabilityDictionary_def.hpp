#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Capabilities/CapabilityDictionary.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Collections/zzzz__SerializableDictionary_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CapabilityDictionary)
// Forward declare root types
namespace Unity::XR::CoreUtils::Capabilities {
class CapabilityDictionary;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary*, "Unity.XR.CoreUtils.Capabilities", "CapabilityDictionary");
// Dependencies Unity.XR.CoreUtils.Collections.SerializableDictionary`2<TKey, TValue>
namespace Unity::XR::CoreUtils::Capabilities {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.Capabilities.CapabilityDictionary
class CORDL_TYPE CapabilityDictionary : public ::Unity::XR::CoreUtils::Collections::SerializableDictionary_2<::StringW,bool> {
public:
// Declarations
/// @brief Method ForceSerialize, addr 0xb3fd6f0, size 0x48, virtual false, abstract: false, final false
inline void ForceSerialize() ;

static inline ::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary* New_ctor() ;

/// @brief Method OnBeforeSerialize, addr 0xb3fd738, size 0x4, virtual true, abstract: false, final false
inline void OnBeforeSerialize() ;

/// @brief Method .ctor, addr 0xb3fd73c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CapabilityDictionary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CapabilityDictionary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CapabilityDictionary(CapabilityDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CapabilityDictionary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CapabilityDictionary(CapabilityDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30455};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::Capabilities::CapabilityDictionary) == 0x58, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils::Capabilities
