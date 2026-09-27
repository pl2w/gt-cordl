#pragma once
// IWYU pragma private; include "Photon/Voice/IAudioPusher_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioPusher_1)
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
template<typename TType,typename TInfo>
class ObjectFactory_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class IAudioPusher_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::IAudioPusher_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::IAudioPusher_1, "Photon.Voice", "IAudioPusher`1");
// Dependencies 
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.IAudioPusher`1<T>
class CORDL_TYPE IAudioPusher_1 {
public:
// Declarations
/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr operator  ::Photon::Voice::IAudioDesc*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method SetCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetCallback(::System::Action_1<::ArrayW<T>>*  callback, ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*  bufferFactory) ;

/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* i___Photon__Voice__IAudioDesc() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAudioPusher_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioPusher_1(IAudioPusher_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28444};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
