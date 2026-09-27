#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/ILoggableDependent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILoggableDependent)
namespace Photon::Voice::Unity {
class ILoggable;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class ILoggableDependent;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::ILoggableDependent*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::ILoggableDependent*, "Photon.Voice.Unity", "ILoggableDependent");
// Dependencies 
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.ILoggableDependent
class CORDL_TYPE ILoggableDependent {
public:
// Declarations
 __declspec(property(get=get_IgnoreGlobalLogLevel, put=set_IgnoreGlobalLogLevel)) bool  IgnoreGlobalLogLevel;

/// @brief Convert operator to "::Photon::Voice::Unity::ILoggable"
constexpr operator  ::Photon::Voice::Unity::ILoggable*() noexcept;

/// @brief Method get_IgnoreGlobalLogLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IgnoreGlobalLogLevel() ;

/// @brief Convert to "::Photon::Voice::Unity::ILoggable"
constexpr ::Photon::Voice::Unity::ILoggable* i___Photon__Voice__Unity__ILoggable() noexcept;

/// @brief Method set_IgnoreGlobalLogLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_IgnoreGlobalLogLevel(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ILoggableDependent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILoggableDependent(ILoggableDependent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28876};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice::Unity
