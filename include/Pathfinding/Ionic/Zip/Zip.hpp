#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Pathfinding/Ionic/Zip/AddProgressEventArgs.hpp"
#include "Pathfinding/Ionic/Zip/BadCrcException.hpp"
#include "Pathfinding/Ionic/Zip/BadPasswordException.hpp"
#include "Pathfinding/Ionic/Zip/BadReadException.hpp"
#include "Pathfinding/Ionic/Zip/BadStateException.hpp"
#include "Pathfinding/Ionic/Zip/CloseDelegate.hpp"
#include "Pathfinding/Ionic/Zip/CompressionMethod.hpp"
#include "Pathfinding/Ionic/Zip/CountingStream.hpp"
#include "Pathfinding/Ionic/Zip/CryptoMode.hpp"
#include "Pathfinding/Ionic/Zip/EncryptionAlgorithm.hpp"
#include "Pathfinding/Ionic/Zip/ExtractExistingFileAction.hpp"
#include "Pathfinding/Ionic/Zip/ExtractProgressEventArgs.hpp"
#include "Pathfinding/Ionic/Zip/OffsetStream.hpp"
#include "Pathfinding/Ionic/Zip/OpenDelegate.hpp"
#include "Pathfinding/Ionic/Zip/ReadProgressEventArgs.hpp"
#include "Pathfinding/Ionic/Zip/SaveProgressEventArgs.hpp"
#include "Pathfinding/Ionic/Zip/SetCompressionCallback.hpp"
#include "Pathfinding/Ionic/Zip/SharedUtilities.hpp"
#include "Pathfinding/Ionic/Zip/WriteDelegate.hpp"
#include "Pathfinding/Ionic/Zip/Zip64Option.hpp"
#include "Pathfinding/Ionic/Zip/ZipCipherStream.hpp"
#include "Pathfinding/Ionic/Zip/ZipContainer.hpp"
#include "Pathfinding/Ionic/Zip/ZipCrypto.hpp"
#include "Pathfinding/Ionic/Zip/ZipEntry.hpp"
#include "Pathfinding/Ionic/Zip/ZipEntrySource.hpp"
#include "Pathfinding/Ionic/Zip/ZipEntryTimestamp.hpp"
#include "Pathfinding/Ionic/Zip/ZipErrorAction.hpp"
#include "Pathfinding/Ionic/Zip/ZipErrorEventArgs.hpp"
#include "Pathfinding/Ionic/Zip/ZipException.hpp"
#include "Pathfinding/Ionic/Zip/ZipFile.hpp"
#include "Pathfinding/Ionic/Zip/ZipInputStream.hpp"
#include "Pathfinding/Ionic/Zip/ZipOption.hpp"
#include "Pathfinding/Ionic/Zip/ZipOutput.hpp"
#include "Pathfinding/Ionic/Zip/ZipOutputStream.hpp"
#include "Pathfinding/Ionic/Zip/ZipProgressEventArgs.hpp"
#include "Pathfinding/Ionic/Zip/ZipProgressEventType.hpp"
#include "Pathfinding/Ionic/Zip/ZipSegmentedStream.hpp"
#include "Pathfinding/Ionic/Zip/ZipSegmentedStream_RwMode.hpp"
#ifdef __cpp_modules
                    export module Zip;
                    #endif
                
