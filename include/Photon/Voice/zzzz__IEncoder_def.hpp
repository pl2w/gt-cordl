#pragma once
// IWYU pragma private; include "Photon/Voice/IEncoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IEncoder)
namespace Photon::Voice {
struct FrameFlags;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
class IEncoder;
}
// Write type traits
MARK_REF_T(::Photon::Voice::IEncoder*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IEncoder*, "Photon.Voice", "IEncoder");
// Dependencies 
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.IEncoder
class CORDL_TYPE IEncoder {
public:
// Declarations
 __declspec(property(get=get_Error)) ::StringW  Error;

 __declspec(property(put=set_Output)) ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  Output;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method DequeueOutput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ArraySegment_1<uint8_t> DequeueOutput(::by_ref<::Photon::Voice::FrameFlags>  flags) ;

/// @brief Method EndOfStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void EndOfStream() ;

/// @brief Method GetPlatformAPI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename I>
requires(::cordl_internals::reference_type_constraint<I>)
inline I GetPlatformAPI() ;

/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Error() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Output, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Output(::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IEncoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEncoder(IEncoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28466};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
