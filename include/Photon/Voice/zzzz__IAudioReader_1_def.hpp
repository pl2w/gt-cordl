#pragma once
// IWYU pragma private; include "Photon/Voice/IAudioReader_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAudioReader_1)
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
template<typename T>
class IDataReader_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class IAudioReader_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::IAudioReader_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::IAudioReader_1, "Photon.Voice", "IAudioReader`1");
// Dependencies 
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.IAudioReader`1<T>
class CORDL_TYPE IAudioReader_1 {
public:
// Declarations
/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr operator  ::Photon::Voice::IAudioDesc*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IDataReader_1<T>"
constexpr operator  ::Photon::Voice::IDataReader_1<T>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* i___Photon__Voice__IAudioDesc() noexcept;

/// @brief Convert to "::Photon::Voice::IDataReader_1<T>"
constexpr ::Photon::Voice::IDataReader_1<T>* i___Photon__Voice__IDataReader_1_T_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAudioReader_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioReader_1(IAudioReader_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28443};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
