/*##############################################################################

    HPCC SYSTEMS software Copyright (C) 2012 HPCC Systems.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
############################################################################## */
#ifndef __HQLCATOM_HPP_
#define __HQLCATOM_HPP_

#ifdef _WIN32
#ifdef HQLCPP_EXPORTS
#define HQLCPP_API __declspec(dllexport)
#else
#define HQLCPP_API __declspec(dllimport)
#endif
#endif

extern _ATOM activeActivityMarkerAtom;
extern _ATOM activeMatchTextAtom;
extern _ATOM activeMatchUnicodeAtom;
extern _ATOM activeMatchUtf8Atom;
extern _ATOM activeProductionMarkerAtom;
extern _ATOM activeValidateMarkerAtom;
extern _ATOM activityIdMarkerAtom;
extern _ATOM acosAtom;
extern _ATOM addAggregateRowAtom;
extern _ATOM addAllAtom;
extern _ATOM addRangeAtom;
extern _ATOM addWorkunitAssertFailureAtom;
extern _ATOM addWorkunitExceptionAtom;
extern _ATOM an2bAtom;
extern _ATOM an2fAtom;
extern _ATOM an2l4Atom;
extern _ATOM an2l8Atom;
extern _ATOM an2ls4Atom;
extern _ATOM an2ls8Atom;
extern _ATOM appendRowsToRowsetAtom;
extern _ATOM appendSetXAtom;
extern _ATOM ascii2ebcdicAtom;
extern _ATOM asinAtom;
extern _ATOM atan2Atom;
extern _ATOM atanAtom;
extern _ATOM balancedAtom;
extern _ATOM bitfieldOffsetAtom;
extern _ATOM blobHelperAtom;
extern _ATOM bool2DataAtom;
extern _ATOM bool2StrAtom;
extern _ATOM bool2StrXAtom;
extern _ATOM bool2VStrAtom;
extern _ATOM bool2VStrXAtom;
extern _ATOM branchAtom;
extern _ATOM castIntAtom[9][2];
extern _ATOM checkFieldOverflowAtom;
extern _ATOM checkPersistMatchesAtom;
extern _ATOM checkpointAtom;
extern _ATOM checkRowOverflowAtom;
extern _ATOM childAtom;
extern _ATOM classAtom;
extern _ATOM clearAtom;
extern _ATOM __clearHelperAtom;
extern _ATOM clearPersistAtom;
extern _ATOM clibExpIdAtom;
extern _ATOM containerAtom;
extern _ATOM codeGeneratorAtom;
extern _ATOM codepage2UnicodeAtom;
extern _ATOM codepage2UnicodeXAtom;
extern _ATOM codepageToUtf8Atom;
extern _ATOM codepageToUtf8XAtom;
extern _ATOM codepage2VUnicodeAtom;
extern _ATOM codepage2VUnicodeXAtom;
extern _ATOM columnGetBoolAtom;
extern _ATOM columnGetDataAtom;
extern _ATOM columnGetDataXAtom;
extern _ATOM columnGetIntAtom;
extern _ATOM columnGetQStringAtom;
extern _ATOM columnGetSetIsAllAtom;
extern _ATOM columnGetStringAtom;
extern _ATOM columnGetStringXAtom;
extern _ATOM columnGetUnicodeXAtom;
extern _ATOM columnGetUtf8XAtom;
extern _ATOM columnReadBoolAtom;
extern _ATOM columnReadDataAtom;
extern _ATOM columnReadDataXAtom;
extern _ATOM columnReadIntAtom;
extern _ATOM columnReadQStringAtom;
extern _ATOM columnReadSetIsAllAtom;
extern _ATOM columnReadStringAtom;
extern _ATOM columnReadStringXAtom;
extern _ATOM columnReadUnicodeXAtom;
extern _ATOM columnReadUtf8XAtom;
extern _ATOM compareDataDataAtom;
extern _ATOM compareEStrEStrAtom;
extern _ATOM compareQStrQStrAtom;
extern _ATOM compareStrBlankAtom;
extern _ATOM compareStrStrAtom;
extern _ATOM compareUnicodeUnicodeAtom;
extern _ATOM compareUnicodeUnicodeStrengthAtom;
extern _ATOM compareUtf8Utf8Atom;
extern _ATOM compareUtf8Utf8StrengthAtom;
extern _ATOM compareVStrVStrAtom;
extern _ATOM compareVUnicodeVUnicodeAtom;
extern _ATOM compareVUnicodeVUnicodeStrengthAtom;
extern _ATOM concatAtom;
extern _ATOM concatExtendAtom;
extern _ATOM concatStr2StrAtom;
extern _ATOM concatStrFAtom;
extern _ATOM concatUnicodeAtom;
extern _ATOM concatUnicodeFAtom;
extern _ATOM concatUnicodeToUnicodeAtom;
extern _ATOM concatUtf8Atom;
extern _ATOM concatUtf8ToUtf8Atom;
extern _ATOM concatVStr2StrAtom;
extern _ATOM concatVStrAtom;
extern _ATOM concatVStrFAtom;
extern _ATOM concatVUnicodeAtom;
extern _ATOM concatVUnicodeFAtom;
extern _ATOM concatVUnicodeToUnicodeAtom;
extern _ATOM _conditionalRowMarker_Atom;
extern _ATOM cosAtom;
extern _ATOM coshAtom;
extern _ATOM countProviderAtom;
extern _ATOM countRoxieDiskFileAtom;
extern _ATOM countRowsAtom;
extern _ATOM countToSizeAtom;
extern _ATOM crcDataAtom;
extern _ATOM crcUnicodeAtom;
extern _ATOM crcUtf8Atom;
extern _ATOM crcVStrAtom;
extern _ATOM crcVUnicodeAtom;
extern _ATOM createBlobAtom;
extern _ATOM createDataRangeLowAtom;
extern _ATOM createDataRangeHighAtom;
extern _ATOM createOrderAtom;
extern _ATOM createQStrRangeLowAtom;
extern _ATOM createQStrRangeHighAtom;
extern _ATOM createQuotedStringAtom;
extern _ATOM createRangeLowAtom;
extern _ATOM createRangeHighAtom;
extern _ATOM createRegexAtom;
extern _ATOM createRowFromXmlAtom;
extern _ATOM createStrRangeLowAtom;
extern _ATOM createStrRangeHighAtom;
extern _ATOM createUnicodeRangeLowAtom;
extern _ATOM createUnicodeRangeHighAtom;
extern _ATOM createWRegexAtom;
extern _ATOM creatorAtom;
extern _ATOM csvReadMarkerAtom;
extern _ATOM csvStr2BoolAtom;
extern _ATOM ctxGetRowXmlAtom;
extern _ATOM currentAtom;
extern _ATOM data2BoolAtom;
extern _ATOM dataset2DatasetXAtom;
extern _ATOM dataset2RowsetXAtom;
extern _ATOM DecAbsAtom;
extern _ATOM DecAddAtom;
extern _ATOM DecCompareDecimalAtom;
extern _ATOM DecCompareUDecimalAtom;
extern _ATOM DecCompareNullAtom;
extern _ATOM DecDistinctAtom;
extern _ATOM DecDistinctRAtom;
extern _ATOM DecDivideAtom;
extern _ATOM decimalAtom;
extern _ATOM declareAtom;
extern _ATOM DecModulusAtom;
extern _ATOM DecMulAtom;
extern _ATOM DecNegateAtom;
extern _ATOM DecPopDecimalAtom;
extern _ATOM DecPopInt64Atom;
extern _ATOM DecPopLongAtom;
extern _ATOM DecPopRealAtom;
extern _ATOM DecPopStringAtom;
extern _ATOM DecPopStringXAtom;
extern _ATOM DecPopUDecimalAtom;
extern _ATOM DecPopVStringAtom;
extern _ATOM DecPopVStringXAtom;
extern _ATOM DecPushCStringAtom;
extern _ATOM DecPushDecimalAtom;
extern _ATOM DecPushInt64Atom;
extern _ATOM DecPushLongAtom;
extern _ATOM DecPushQStringAtom;
extern _ATOM DecPushRealAtom;
extern _ATOM DecPushStringAtom;
extern _ATOM DecPushUDecimalAtom;
extern _ATOM DecPushUInt64Atom;
extern _ATOM DecPushUnicodeAtom;
extern _ATOM DecPushUtf8Atom;
extern _ATOM DecRoundAtom;
extern _ATOM DecRoundUpAtom;
extern _ATOM DecRoundToAtom;
extern _ATOM DecSetPrecisionAtom;
extern _ATOM DecSubAtom;
extern _ATOM DecTruncateAtom;
extern _ATOM DecTruncateAtAtom;
extern _ATOM DecValidAtom;
extern _ATOM delayedAtom;
extern _ATOM deleteFileAtom;
extern _ATOM dependencyAtom;
extern _ATOM deserializerAtom;
extern _ATOM deserializeRawAtom;
extern _ATOM deserializeChildDictionaryFromDatasetFromStreamAtom;
extern _ATOM deserializeChildDictionaryFromStreamAtom;
extern _ATOM deserializeChildRowsetFromStreamAtom;
extern _ATOM deserializeCStringXAtom;
extern _ATOM deserializeDataXAtom;
extern _ATOM deserializeDatasetXAtom;
extern _ATOM deserializeDictionaryXAtom;
extern _ATOM deserializeGroupedDatasetXAtom;
extern _ATOM deserializeQStrXAtom;
extern _ATOM deserializeRowAtom;
extern _ATOM deserializeRowsetXAtom;
extern _ATOM deserializeGroupedRowsetXAtom;
extern _ATOM deserializeStringXAtom;
extern _ATOM deserializeSetAtom;
extern _ATOM deserializeUnicodeXAtom;
extern _ATOM deserializeUtf8XAtom;
extern _ATOM deserializeVUnicodeXAtom;
extern _ATOM deserializerReadNAtom;
extern _ATOM deserializerReadPackedIntAtom;
extern _ATOM deserializerReadSizeAtom;
extern _ATOM deserializerReadUtf8Atom;
extern _ATOM deserializerReadVStrAtom;
extern _ATOM deserializerReadVUniAtom;
extern _ATOM deserializerPeekAtom;
extern _ATOM deserializerBeginNestedAtom;
extern _ATOM deserializerFinishedNestedAtom;
extern _ATOM deserializerSkipNAtom;
extern _ATOM deserializerSkipPackedIntAtom;
extern _ATOM deserializerSkipUtf8Atom;
extern _ATOM deserializerSkipVStrAtom;
extern _ATOM deserializerSkipVUniAtom;
extern _ATOM destroyRegexAtom;
extern _ATOM destroyWRegexAtom;
extern _ATOM destructMetaMemberAtom;
extern _ATOM dictionaryCountAtom;
extern _ATOM dictionaryLookupAtom;
extern _ATOM dictionaryLookupExistsAtom;
extern _ATOM doNotifyAtom;
extern _ATOM doNotifyTargetAtom;
extern _ATOM ebcdic2asciiAtom;
extern _ATOM eclAtom;
extern _ATOM en2fAtom;
extern _ATOM en2l4Atom;
extern _ATOM en2l8Atom;
extern _ATOM en2ls4Atom;
extern _ATOM en2ls8Atom;
extern _ATOM endAtom;
extern _ATOM ensureCapacityAtom;
extern _ATOM ensureRowAvailableAtom;
extern _ATOM __eogAtom;
extern _ATOM estr2EStrAtom;
extern _ATOM estr2VStrAtom;
extern _ATOM estr2VStrXAtom;
extern _ATOM evaluateChildQueryInstanceAtom;
extern _ATOM ex2fAtom;
extern _ATOM executeGraphAtom;
extern _ATOM executeChildQueryInstanceAtom;
extern _ATOM extractAtom;
extern _ATOM f2anAtom;
extern _ATOM f2axAtom;
extern _ATOM f2vnAtom;
extern _ATOM f2vxAtom;
extern _ATOM _failIdAtom;
extern _ATOM fileAtom;
extern _ATOM fileExistsAtom;
extern _ATOM finalizeRowClearAtom;
extern _ATOM finishPersistAtom;
extern _ATOM forceAllCheckAtom;
extern _ATOM freeAtom;
extern _ATOM freeExceptionAtom;
extern _ATOM getBytesFromBuilderAtom;
extern _ATOM getClusterSizeAtom;
extern _ATOM getChildQueryDictionaryResultAtom;
extern _ATOM getChildQueryLinkedResultAtom;
extern _ATOM getChildQueryResultAtom;
extern _ATOM getDatasetHashAtom;
extern _ATOM getECLAtom;
extern _ATOM getEnvAtom;
extern _ATOM getEventExtraAtom;
extern _ATOM getEventNameAtom;
extern _ATOM getExpandLogicalNameAtom;
extern _ATOM getFailMessageAtom;
extern _ATOM getFilePositionAtom;
extern _ATOM getGraphLoopCounterAtom;
extern _ATOM getIsValidAtom;
extern _ATOM getLocalDictionaryResultAtom;
extern _ATOM getLocalFailMessageAtom;
extern _ATOM getLocalFilePositionAtom;
extern _ATOM getLocalLinkedResultAtom;
extern _ATOM getLocalResultAtom;
extern _ATOM getMatchedAtom;
extern _ATOM getMatchLengthAtom;
extern _ATOM getMatchPositionAtom;
extern _ATOM getMatchRowAtom;
extern _ATOM getMatchTextAtom;
extern _ATOM getMatchUnicodeAtom;
extern _ATOM getMatchUtf8Atom;
extern _ATOM getPackedSignedAtom;
extern _ATOM getPackedSizeAtom;
extern _ATOM getPackedUnsignedAtom;
extern _ATOM getProductionResultAtom;
extern _ATOM getProductionTextAtom;
extern _ATOM getProductionUnicodeAtom;
extern _ATOM getProductionUtf8Atom;
extern _ATOM getRecoveringCountAtom;
extern _ATOM getResultBoolAtom;
extern _ATOM getResultDataAtom;
extern _ATOM getResultDatasetAtom;
extern _ATOM getResultDecimalAtom;
extern _ATOM getResultDictionaryAtom;
extern _ATOM getResultHashAtom;
extern _ATOM getResultIntAtom;
extern _ATOM getResultQStringAtom;
extern _ATOM getResultRealAtom;
extern _ATOM getResultRowsetAtom;
extern _ATOM getResultSetAtom;
extern _ATOM getResultStringAtom;
extern _ATOM getResultStringFAtom;
extern _ATOM getResultUnicodeAtom;
extern _ATOM getResultVarStringAtom;
extern _ATOM getResultVarUnicodeAtom;
extern _ATOM getRootResultAtom;
extern _ATOM getWorkflowIdAtom;
extern _ATOM getWuidAtom;
extern _ATOM groupedDataset2RowsetXAtom;
extern _ATOM groupedRowset2DatasetXAtom;
extern _ATOM goAtom;
extern _ATOM guardAtom;
extern _ATOM hash32DataAtom;
extern _ATOM hash32Data1Atom;
extern _ATOM hash32Data2Atom;
extern _ATOM hash32Data3Atom;
extern _ATOM hash32Data4Atom;
extern _ATOM hash32Data5Atom;
extern _ATOM hash32Data6Atom;
extern _ATOM hash32Data7Atom;
extern _ATOM hash32Data8Atom;
extern _ATOM hash32UnicodeAtom;
extern _ATOM hash32Utf8Atom;
extern _ATOM hash32VStrAtom;
extern _ATOM hash32VUnicodeAtom;
extern _ATOM hash64DataAtom;
extern _ATOM hash64UnicodeAtom;
extern _ATOM hash64Utf8Atom;
extern _ATOM hash64VStrAtom;
extern _ATOM hash64VUnicodeAtom;
extern _ATOM hashDataAtom;
extern _ATOM hashDataNCAtom;
extern _ATOM hashMd5FinishAtom;
extern _ATOM hashMd5InitAtom;
extern _ATOM hashMd5DataAtom;
extern _ATOM hashUnicodeAtom;
extern _ATOM hashUtf8Atom;
extern _ATOM hashVStrAtom;
extern _ATOM hashVStrNCAtom;
extern _ATOM hashVUnicodeAtom;
extern _ATOM helperAtom;
extern _ATOM implicitAtom;
extern _ATOM IIndirectMemberVisitor_visitRowAtom;
extern _ATOM IIndirectMemberVisitor_visitRowsetAtom;
extern _ATOM inAtom;
extern _ATOM indexLayoutMarkerAtom;
extern _ATOM initAtom;
extern _ATOM initProcessAtom;
extern _ATOM insideOnCreateAtom;
extern _ATOM insideOnStartAtom;
extern _ATOM instanceAtom;
extern _ATOM intFormatAtom;
extern _ATOM isLastBitfieldAtom;
extern _ATOM isResultAtom;
extern _ATOM iteratorAtom;
extern _ATOM keyUnicodeXAtom;
extern _ATOM keyUnicodeStrengthXAtom;
extern _ATOM killRangeAtom;
extern _ATOM l42anAtom;
extern _ATOM l42axAtom;
extern _ATOM l42vnAtom;
extern _ATOM l42vxAtom;
extern _ATOM l82anAtom;
extern _ATOM l82axAtom;
extern _ATOM l82vnAtom;
extern _ATOM l82vxAtom;
extern _ATOM linkdataset2linkdatasetAtom;
extern _ATOM linkRowAtom;
extern _ATOM linkRowsetAtom;
extern _ATOM lnAtom;
extern _ATOM loadResourceAtom;
extern _ATOM log10Atom;
extern _ATOM lookupBlobAtom;
extern _ATOM _loop_Atom;
extern _ATOM _loopFirst_Atom;
extern _ATOM ls42anAtom;
extern _ATOM ls42axAtom;
extern _ATOM ls42vnAtom;
extern _ATOM ls42vxAtom;
extern _ATOM ls82anAtom;
extern _ATOM ls82axAtom;
extern _ATOM ls82vnAtom;
extern _ATOM ls82vxAtom;
extern _ATOM mainprototypesAtom;
extern _ATOM memcmpAtom;
extern _ATOM memcpyAtom;
extern _ATOM memsetAtom;
extern _ATOM multiInstanceAtom;
extern _ATOM newWhenActionArgAtom;
extern _ATOM newDegroupArgAtom;
extern _ATOM newFunnelArgAtom;
extern _ATOM newGraphLoopResultWriteArgAtom;
extern _ATOM newLocalResultReadArgAtom;
extern _ATOM newLocalResultSpillArgAtom;
extern _ATOM newMemorySpillReadArgAtom;
extern _ATOM newMemorySpillSplitArgAtom;
extern _ATOM newNullArgAtom;
extern _ATOM newSelectNArgAtom;
extern _ATOM newSplitArgAtom;
extern _ATOM newWorkUnitReadArgAtom;
extern _ATOM newWorkUnitWriteArgAtom;
extern _ATOM _noAccess_Atom;
extern _ATOM _noReplicate_Atom;
extern _ATOM noSetAtom;
extern _ATOM _noVirtual_Atom;
extern _ATOM numResultsAtom;
extern _ATOM offsetProviderAtom;
extern _ATOM outputXmlBeginNestedAtom;
extern _ATOM outputXmlBoolAtom;
extern _ATOM outputXmlDataAtom;
extern _ATOM outputXmlDecimalAtom;
extern _ATOM outputXmlEndNestedAtom;
extern _ATOM outputXmlIntAtom;
extern _ATOM outputXmlQStringAtom;
extern _ATOM outputXmlRealAtom;
extern _ATOM outputXmlSetAllAtom;
extern _ATOM outputXmlStringAtom;
extern _ATOM outputXmlUIntAtom;
extern _ATOM outputXmlUnicodeAtom;
extern _ATOM outputXmlUtf8Atom;
extern _ATOM packingAtom;
extern _ATOM parentHelpersAtom;
extern _ATOM pathAtom;
extern _ATOM _physical_Atom;
extern _ATOM powerAtom;
extern _ATOM prefetcherInstanceMarkerAtom;
extern _ATOM prefixDiffStrAtom;
extern _ATOM prefixDiffUnicodeAtom;
extern _ATOM processFieldBoolAtom;
extern _ATOM processFieldDataAtom;
extern _ATOM processFieldDecimalAtom;
extern _ATOM processFieldIntAtom;
extern _ATOM processFieldQStringAtom;
extern _ATOM processFieldRealAtom;
extern _ATOM processFieldStringAtom;
extern _ATOM processFieldUIntAtom;
extern _ATOM processFieldUnicodeAtom;
extern _ATOM processFieldUtf8Atom;
extern _ATOM processFieldSetAllAtom;
extern _ATOM processFieldBeginSetAtom;
extern _ATOM processFieldBeginDatasetAtom;
extern _ATOM processFieldBeginRowAtom;
extern _ATOM processFieldEndSetAtom;
extern _ATOM processFieldEndDatasetAtom;
extern _ATOM processFieldEndRowAtom;
extern _ATOM queryFailCodeAtom;
extern _ATOM queryLocalFailCodeAtom;
extern _ATOM queryLocalResultAtom;
extern _ATOM queryLogicalFilenameAtom;
extern _ATOM quickAtom;
extern _ATOM qstr2BoolAtom;
extern _ATOM qstr2DataAtom;
extern _ATOM qstr2DataXAtom;
extern _ATOM qstrToQStrAtom;
extern _ATOM qstrToQStrXAtom;
extern _ATOM qstr2StrAtom;
extern _ATOM qstr2StrXAtom;
extern _ATOM qstr2VStrAtom;
extern _ATOM qstrLengthAtom;
extern _ATOM qstrSizeAtom;
extern _ATOM rankedFromOrderAtom;
extern _ATOM rankFromOrderAtom;
extern _ATOM readIntAtom[9][2];
extern _ATOM readSwapIntAtom[9][2];
extern _ATOM realFormatAtom;
extern _ATOM releaseRowAtom;
extern _ATOM releaseRowsetAtom;
extern _ATOM _regexFindInstance_Atom;
extern _ATOM regexFindXAtom;
extern _ATOM _regexInstance_Atom;
extern _ATOM regexGetFindStrAtom;
extern _ATOM regexReplaceXAtom;
extern _ATOM regexNewSetStrPatternAtom;
extern _ATOM regexNewSetUStrPatternAtom;
extern _ATOM regexNewStrFindAtom;
extern _ATOM regexNewStrFoundAtom;
extern _ATOM regexNewStrFoundXAtom;
extern _ATOM regexNewStrReplaceXAtom;
extern _ATOM regexNewUStrFindAtom;
extern _ATOM regexNewUStrFoundAtom;
extern _ATOM regexNewUStrFoundXAtom;
extern _ATOM regexNewUStrReplaceXAtom;
extern _ATOM reportFieldOverflowAtom;
extern _ATOM reportRowOverflowAtom;
extern _ATOM responseinfoAtom;
extern _ATOM restoreClusterAtom;
extern _ATOM resultsAtom;
extern _ATOM returnAtom;
extern _ATOM returnPersistVersionAtom;
extern _ATOM reverseIntAtom[9][2];
extern _ATOM roundAtom;
extern _ATOM roundToAtom;
extern _ATOM roundupAtom;
extern _ATOM rowAllocatorMarkerAtom;
extern _ATOM rowset2DatasetXAtom;
extern _ATOM rtlDeserializeDictionaryAtom;
extern _ATOM rtlDeserializeDictionaryFromDatasetAtom;
extern _ATOM rtlDeserializeRowAtom;
extern _ATOM rtlDeserializeToBuilderAtom;
extern _ATOM rtlFieldKeyMarkerAtom;
extern _ATOM rtlMaxAtom;
extern _ATOM rtlMinAtom;
extern _ATOM rtlRandomAtom;
extern _ATOM rtlSerializeDictionaryAtom;
extern _ATOM rtlSerializeDictionaryToDatasetAtom;
extern _ATOM rtlSerializeToBuilderAtom;
extern _ATOM searchTableInteger4Atom;
extern _ATOM searchTableInteger8Atom;
extern _ATOM searchTableUInteger4Atom;
extern _ATOM searchTableUInteger8Atom;
extern _ATOM searchUnicodeTableAtom;
extern _ATOM searchUtf8TableAtom;
extern _ATOM searchVUnicodeTableAtom;
extern _ATOM selectClusterAtom;
extern _ATOM _selfJoinPlaceholder_Atom;
extern _ATOM serializerAtom;
extern _ATOM serializeChildDictionaryToStreamAtom;
extern _ATOM serializeChildDictionaryToDatasetToStreamAtom;
extern _ATOM serializeChildRowsetToStreamAtom;
extern _ATOM serializeCStringXAtom;
extern _ATOM serializeDataXAtom;
extern _ATOM serializeDatasetXAtom;
extern _ATOM serializeGroupedDatasetXAtom;
extern _ATOM serializeStringXAtom;
extern _ATOM serializeBoolAtom;
extern _ATOM serializeDictionaryXAtom;
extern _ATOM serializeFixedDataAtom;
extern _ATOM serializeFixedStringAtom;
extern _ATOM serializeQStrXAtom;
extern _ATOM serializeLPDataAtom;
extern _ATOM serializeLPQStringAtom;
extern _ATOM serializeLPStringAtom;
extern _ATOM serializeRawAtom;
extern _ATOM serializeReal4Atom;
extern _ATOM serializeReal8Atom;
extern _ATOM serializeRowAtom;
extern _ATOM serializeRowsetXAtom;
extern _ATOM serializeGroupedRowsetXAtom;
extern _ATOM serializeSetAtom;
extern _ATOM serializeUnicodeXAtom;
extern _ATOM serializeUtf8XAtom;
extern _ATOM serializerPutAtom;
extern _ATOM serializerBeginNestedAtom;
extern _ATOM serializerEndNestedAtom;
extern _ATOM serializerInstanceMarkerAtom;
extern _ATOM setConditionCodeAtom;
extern _ATOM setMethodAtom;
extern _ATOM setOwnMethodAtom;
extern _ATOM setPackedSignedAtom;
extern _ATOM setPackedUnsignedAtom;
extern _ATOM setResultBoolAtom;
extern _ATOM setResultDataAtom;
extern _ATOM setResultDatasetAtom;
extern _ATOM setResultDecimalAtom;
extern _ATOM setResultIntAtom;
extern _ATOM setResultQStringAtom;
extern _ATOM setResultRawAtom;
extern _ATOM setResultRealAtom;
extern _ATOM setResultSetAtom;
extern _ATOM setResultStringAtom;
extern _ATOM setResultUIntAtom;
extern _ATOM setResultUnicodeAtom;
extern _ATOM setResultVarStringAtom;
extern _ATOM setResultVarUnicodeAtom;
extern _ATOM setWorkflowConditionAtom;
extern _ATOM set2SetXAtom;
extern _ATOM sinAtom;
extern _ATOM sinhAtom;
extern _ATOM skipActionMarkerAtom;
extern _ATOM skipReturnMarkerAtom;
extern _ATOM speedAtom;
extern _ATOM spillAtom;
extern _ATOM _spill_Atom;
extern _ATOM _spillReason_Atom;
extern _ATOM sqrtAtom;
extern _ATOM startPersistAtom;
extern _ATOM _steppedMeta_Atom;
extern _ATOM str2DataAtom;
extern _ATOM str2DataXAtom;
extern _ATOM strToQStrAtom;
extern _ATOM strToQStrXAtom;
extern _ATOM str2StrAtom;
extern _ATOM str2StrXAtom;
extern _ATOM str2VStrAtom;
extern _ATOM str2VStrXAtom;
extern _ATOM strcpyAtom;
extern _ATOM strlenAtom;
extern _ATOM subDataFTAtom;
extern _ATOM subDataFTXAtom;
extern _ATOM subDataFXAtom;
extern _ATOM subgraphAtom;
extern _ATOM subQStrFTAtom;
extern _ATOM subQStrFTXAtom;
extern _ATOM subQStrFXAtom;
extern _ATOM subStrFTAtom;
extern _ATOM subStrFTXAtom;
extern _ATOM subStrFXAtom;
extern _ATOM sysFailAtom;
extern _ATOM tanAtom;
extern _ATOM tanhAtom;
extern _ATOM _tempCount_Atom;
extern _ATOM _translated_Atom;
extern _ATOM trimAllAtom;
extern _ATOM trimBothAtom;
extern _ATOM trimLeftAtom;
extern _ATOM trimRightAtom;
extern _ATOM trimStrLenAtom;
extern _ATOM trimUnicodeAllAtom;
extern _ATOM trimUnicodeBothAtom;
extern _ATOM trimUnicodeLeftAtom;
extern _ATOM trimUnicodeRightAtom;
extern _ATOM trimUnicodeStrLenAtom;
extern _ATOM trimUtf8AllAtom;
extern _ATOM trimUtf8BothAtom;
extern _ATOM trimUtf8LeftAtom;
extern _ATOM trimUtf8RightAtom;
extern _ATOM trimUtf8StrLenAtom;
extern _ATOM trimVAllAtom;
extern _ATOM trimVBothAtom;
extern _ATOM trimVLeftAtom;
extern _ATOM trimVRightAtom;
extern _ATOM trimVStrLenAtom;
extern _ATOM trimVUnicodeAllAtom;
extern _ATOM trimVUnicodeBothAtom;
extern _ATOM trimVUnicodeLeftAtom;
extern _ATOM trimVUnicodeRightAtom;
extern _ATOM trimVUnicodeStrLenAtom;
extern _ATOM truncateAtom;
extern _ATOM UCharAtom;
extern _ATOM unicode2CodepageAtom;
extern _ATOM unicode2CodepageXAtom;
extern _ATOM unicode2DataAtom;
extern _ATOM unicode2DataXAtom;
extern _ATOM unicode2UnicodeAtom;
extern _ATOM unicode2UnicodeXAtom;
extern _ATOM unicodeToUtf8Atom;
extern _ATOM unicodeToUtf8XAtom;
extern _ATOM unicode2VCodepageAtom;
extern _ATOM unicode2VCodepageXAtom;
extern _ATOM unicode2VUnicodeAtom;
extern _ATOM unicode2VUnicodeXAtom;
extern _ATOM unicodeNullTerminateAtom;
extern _ATOM unicodeStrcpyAtom;
extern _ATOM unicodeStrlenAtom;
extern _ATOM unicodeSubStrFTXAtom;
extern _ATOM unicodeSubStrFXAtom;
extern _ATOM updatePersistAtom;
extern _ATOM utf8Atom;
extern _ATOM utf82CodepageAtom;
extern _ATOM utf82CodepageXAtom;
extern _ATOM utf82DataAtom;
extern _ATOM utf82DataXAtom;
extern _ATOM utf82UnicodeAtom;
extern _ATOM utf82UnicodeXAtom;
extern _ATOM utf8ToUtf8Atom;
extern _ATOM utf8ToUtf8XAtom;
extern _ATOM utf8ToUtf8Atom;
extern _ATOM utf8ToUtf8XAtom;
extern _ATOM utf8LengthAtom;
extern _ATOM utf8SizeAtom;
extern _ATOM utf8SubStrFTXAtom;
extern _ATOM utf8SubStrFXAtom;
extern _ATOM validRealAtom;
extern _ATOM vcodepage2UnicodeAtom;
extern _ATOM vcodepage2UnicodeXAtom;
extern _ATOM vcodepage2VUnicodeAtom;
extern _ATOM vcodepage2VUnicodeXAtom;
extern _ATOM vn2bAtom;
extern _ATOM vn2fAtom;
extern _ATOM vn2l4Atom;
extern _ATOM vn2l8Atom;
extern _ATOM vn2ls4Atom;
extern _ATOM vn2ls8Atom;
extern _ATOM vstr2DataAtom;
extern _ATOM vstr2StrAtom;
extern _ATOM vstr2VStrAtom;
extern _ATOM vunicode2CodepageAtom;
extern _ATOM vunicode2CodepageXAtom;
extern _ATOM vunicode2DataAtom;
extern _ATOM vunicode2DataXAtom;
extern _ATOM vunicode2UnicodeAtom;
extern _ATOM vunicode2UnicodeXAtom;
extern _ATOM vunicode2VCodepageAtom;
extern _ATOM vunicode2VCodepageXAtom;
extern _ATOM vunicode2VUnicodeAtom;
extern _ATOM vunicode2VUnicodeXAtom;
extern _ATOM walkIndirectMetaMemberAtom;
extern _ATOM wrapperAtom;
extern _ATOM wregexFindXAtom;
extern _ATOM wregexReplaceXAtom;
extern _ATOM wregexGetFindStrAtom;
extern _ATOM writeEbcdicAtom;
extern _ATOM writeIntAtom[9];
extern _ATOM writeRealAtom;
extern _ATOM writeSignedAtom;
extern _ATOM writeStringAtom;
extern _ATOM writeUnicodeAtom;
extern _ATOM writeUnsignedAtom;
extern _ATOM writeUtf8Atom;
extern _ATOM xmlColumnProviderAtom;
extern _ATOM xmlDecodeStrAtom;
extern _ATOM xmlDecodeUStrAtom;
extern _ATOM xmlEncodeStrAtom;
extern _ATOM xmlEncodeUStrAtom;
extern _ATOM xmlReadMarkerAtom;

#endif
