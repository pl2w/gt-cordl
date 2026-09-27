#pragma once
// IWYU pragma private; include "Photon/Voice/IProcessor_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(IProcessor_1)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class IProcessor_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::IProcessor_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::IProcessor_1, "Photon.Voice", "IProcessor`1");
// Dependencies 
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.IProcessor`1<T>
class CORDL_TYPE IProcessor_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<T> Process(::ArrayW<T>  buf) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IProcessor_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IProcessor_1(IProcessor_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28484};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
