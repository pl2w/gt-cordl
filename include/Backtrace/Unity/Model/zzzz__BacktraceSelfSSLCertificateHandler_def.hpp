#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceSelfSSLCertificateHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Networking/zzzz__CertificateHandler_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceSelfSSLCertificateHandler)
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceSelfSSLCertificateHandler;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler*, "Backtrace.Unity.Model", "BacktraceSelfSSLCertificateHandler");
// Dependencies UnityEngine.Networking.CertificateHandler
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceSelfSSLCertificateHandler
class CORDL_TYPE BacktraceSelfSSLCertificateHandler : public ::UnityEngine::Networking::CertificateHandler {
public:
// Declarations
/// @brief Field PUB_KEY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PUB_KEY, put=setStaticF_PUB_KEY)) ::StringW  PUB_KEY;

static inline ::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler* New_ctor() ;

/// @brief Method ValidateCertificate, addr 0x5f12664, size 0x8, virtual true, abstract: false, final false
inline bool ValidateCertificate(::ArrayW<uint8_t>  certificateData) ;

/// @brief Method .ctor, addr 0x5f1266c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_PUB_KEY() ;

static inline void setStaticF_PUB_KEY(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceSelfSSLCertificateHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceSelfSSLCertificateHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceSelfSSLCertificateHandler(BacktraceSelfSSLCertificateHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceSelfSSLCertificateHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceSelfSSLCertificateHandler(BacktraceSelfSSLCertificateHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27601};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Model::BacktraceSelfSSLCertificateHandler) == 0x18, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
